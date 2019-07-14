using Sequence = System.Collections.IEnumerator;

/// <summary>
/// ゲームクラス。
/// 学生が編集すべきソースコードです。
/// </summary>
public sealed class Game : GameBase
{
    // 変数の宣言
    int sec = 0;
    int score　=　0;
    int gameState = 0;
    const int BOX_NUM = 20;
    int[] yukichi_x = new int [BOX_NUM];
    int[] yukichi_y = new int [BOX_NUM];
    int[] yukichi_speed = new int [BOX_NUM];
    int yukichi_w = 40;
    int yukichi_h = 19;
    int kamo_w = 50;

    int kamo_h = 54;
    int sto_w = 20;
    int sto_h = 38;

    bool stflag = false;

    const int KAMO_NUM = 10;
    int[] kamo_x = new int [BOX_NUM];
    int[] kamo_y = new int [BOX_NUM];
    int[] kamo_speed = new int [BOX_NUM];
    
    const int STO_NUM = 1;
    int[] sto_x = new int [BOX_NUM];
    int[] sto_y = new int [BOX_NUM];
    int[] sto_speed = new int [BOX_NUM];
    float player_x = 304;
    float player_y = 1150;

    float player_speed = 20.0f;

    int count =0;

    float alco;
    float lefttime = 0;


    string judge;

    int camera_id; 
    string camera_name;
    int player_h = 100;
    int player_w = 100;

    float pointerX;
    float pointerY;
    int playerImage;
    

    /// <summary>
    /// 初期化処理
    /// </summary>
    public override void InitGame(){
        sec = 0;
        for(int i =0 ; i < BOX_NUM ; i ++ ){
            yukichi_x[i] = gc.Random(0,616);
            yukichi_y[i] = -gc.Random(100,(int)player_y);
            yukichi_speed[i] = gc.Random(3,7);
            }
        for(int k =0 ; k < KAMO_NUM ; k ++ ){
            kamo_x[k] = gc.Random(0,616);
            kamo_y[k] = -gc.Random(100,(int)player_y);
            kamo_speed[k] = gc.Random(3,7);
        }   
        for(int s =0 ; s < STO_NUM ; s ++ ){
            sto_x[s] = gc.Random(0,616);
            sto_y[s] = -gc.Random(100,(int)player_y);
            sto_speed[s] = gc.Random(3,10);
        } 
        gc.SetResolution(720, 1280);
    }
    

    /// <summary>
    /// 動きなどの更新処理
    /// </summary>
    public override void UpdateGame(){
        sec = (int)gc.TimeSinceStartup;
        pointerX = gc.GetPointerX(0);
        pointerY = gc.GetPointerY(0);
        if(gameState == 0){
            //タイトル画面の処理
            if(pointerX>45 && pointerX<345 && pointerY>500 && pointerY < 800){
                if(gc.GetPointerFrameCount(0) == 1){
                    gameState = 1;
                    playerImage = 5;
                }
            }else if(pointerX>375 && pointerX<675 && pointerY>500 && pointerY < 800){
                if(gc.GetPointerFrameCount(0) == 1){
                    gameState = 1;
                    playerImage = 8;
                }
            }else if(pointerX>45 && pointerX<345 && pointerY>900 && pointerY < 1200){
                if(gc.GetPointerFrameCount(0) == 1){
                    gameState = 1;
                    playerImage = 6;
                }
            }else if(pointerX>375 && pointerX<675 && pointerY>900 && pointerY < 1200){
                if(gc.GetPointerFrameCount(0) == 1){
                    gameState = 1;
                    playerImage = 7;
                } 
            }
        }else if(gameState == 1){
        //ゲーム中の処理
            count++;
            yukichi_w = 24+count/300;
            yukichi_h = 24+count/300;
            player_x += gc.AccelerationLastX * player_speed;
            for(int i =0 ; i < BOX_NUM ; i ++ ){
                yukichi_y[i] =  yukichi_y[i] + yukichi_speed[i];
                if(yukichi_y[i]> player_y){
                    yukichi_x[i] = gc.Random(0,616);
                    yukichi_y[i] = -gc.Random(100,(int)player_y);
                    yukichi_speed[i] = gc.Random(3,7);
                }
                if (gc.CheckHitRect((int)player_x, (int)player_y, player_w, player_h, yukichi_x[i], yukichi_y[i], yukichi_w, yukichi_h)) {
                    score+=1;
                    yukichi_x[i] = -10;
                    yukichi_y[i] = -10;
                }
            }
            for(int k =0 ; k < KAMO_NUM ; k ++ ){
                kamo_y[k] =  kamo_y[k] + kamo_speed[k];
                if(kamo_y[k]> player_y){
                    kamo_x[k] = gc.Random(0,616);
                    kamo_y[k] = -gc.Random(100,(int)player_y);
                    kamo_speed[k] = gc.Random(3,7);
                }
                if (gc.CheckHitRect((int)player_x, (int)player_y, player_w, player_h, kamo_x[k], kamo_y[k], kamo_w, kamo_h)) {
                    if(stflag == false){
                        score-=1;
                    }
                    kamo_x[k] = -10;
                    kamo_y[k] = -10;
                }
            }
            for(int s = 0 ; s < STO_NUM ; s ++ ){
                sto_y[s] =  sto_y[s] + sto_speed[s];
                if(sto_y[s]> player_y){
                    sto_x[s] = gc.Random(0,616);
                    sto_y[s] = -gc.Random(100,(int)player_y);
                    sto_speed[s] = gc.Random(3,10);
                }
                if (gc.CheckHitRect((int)player_x, (int)player_y, player_w, player_h, sto_x[s], sto_y[s], sto_w, sto_h)) {
                    alco = sec +5;
                    stflag = true;
                    sto_x[s] = -10;
                    sto_y[s] = -10;
                }
            }
            if(alco - sec <= 0){
                stflag = false;
                lefttime = 0;
            }else if(alco - sec >= 0){
                lefttime = alco - sec;
            }
            if(sec>=50){
                if(score<=0){
                    judge = "お金かして...";
                }else if(score>0 && score < 5){
                    judge = "今月ピンチ";
                }else if(score>=5 && score<10){
                    judge = "美味しいランチでも食べよう";
                }else if(score>=10 && score<20){
                    judge = "パーティーだ！";
                }else if(score>=20){
                    judge = "旅行でも行こうかな";
                }
                gameState=2;

            }
            //player return
            if(player_x < 0){
                player_x = 608;
            }else if(player_x>608){
                player_x = 0;
            }
        }else if(gameState == 2){
            if(gc.GetPointerFrameCount(0) >= 120){
                gameState = 0;
                count = 0;
                sec = -(int)gc.TimeSinceStartup;
                score = 0;

                InitGame();
            }
        }
    }

    /// <summary>
    /// 描画の処理
    /// </summary>
    public override void DrawGame()
    {
        gc.ClearScreen();
        if(gameState==0){
            gc.SetColor(200, 100, 0);
            gc.SetFontSize(50);
            gc.DrawImage(0, 0, 0);
            gc.DrawString("諭吉ハンター", 210, 140);
            gc.SetFontSize(40);
            gc.DrawString("Select a character!", 170, 200);
            gc.DrawImage(9, 45, 500);
            gc.DrawImage(12, 375, 500);
            gc.DrawImage(10, 45, 900);
            gc.DrawImage(11, 375, 900);
        }else if(gameState==2){
            gc.DrawImage(0, 0, 0);
            gc.SetColor(255, 215, 0);
            gc.SetFontSize(50);
            gc.DrawString("Game Over", 200, 640);
            gc.SetFontSize(30);
            gc.DrawString("あなたの所持金: " + score + "万円", 200, 700);
            gc.DrawString("判定: "+judge, 200, 740);
            gc.DrawString("長押ししてリトライ", 200, 800);
        }else if (gameState==1){
            gc.DrawImage(1, 0, 0);
            gc.DrawString("残り時間:"+(50-sec), 20, 20);
            for(int i =0 ; i < BOX_NUM ; i ++ ){
                gc.DrawImage(13, yukichi_x[i], yukichi_y[i]);  
            }
            for(int i =0 ; i < KAMO_NUM ; i ++ ){
                gc.DrawImage(3, kamo_x[i], kamo_y[i]);  
            }
            for(int i =0 ; i < STO_NUM ; i ++ ){
                gc.DrawImage(14, sto_x[i], sto_y[i]);  
            }
            // gc.DrawScaledRotateCameraImage((int)player_x,(int)player_y,8,10,gc.CurrentCameraRotation);
            gc.DrawString(score + "万円", 20, 70);
            if(lefttime>0){
                gc.DrawString("残り無敵時間:"+lefttime, 20, 110);
            }
            gc.DrawImage(playerImage, (int)player_x, (int)player_y);
        }
    }
}
