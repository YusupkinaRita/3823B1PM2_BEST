#include <math.h>

char robot_move(int xs[], int ys[], int num_points, double area_radius, int xt, int yt){
    int y=0, x=0;
    for(int i=0;i<num_points;i++){
        if (((xs[i]+area_radius>=xt)&&(xt>=xs[i]))||((xs[i]-area_radius<=xt)&&(xt<=xs[i]))){
            if(((ys[i]+area_radius>=yt)&&(yt>=ys[i]))||((ys[i]-area_radius<=yt)&&(yt<=ys[i]))){
                return 1;
                break;
            }

        }
    }
    for(int j=0;j<num_points;j++ ){
        if(xs[j]==xs[j+1]){
            if(((x+area_radius>=xt)&&(xt>=x))||((x-area_radius<=xt)&&(xt<=x))){
                for(int t=ys[j];t<ys[j+1];t++){
                    y=t;
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
                for(int d=ys[j];d>ys[j+1];d--){
                    y=d;
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
                if(ys[j]==ys[j+1]){
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
            }

        }
        
        for(int i=xs[j];i<xs[j+1];i++){
            x=i;
            if(((x+area_radius>=xt)&&(xt>=x))||((x-area_radius<=xt)&&(xt<=x))){
                for(int t=ys[j];t<ys[j+1];t++){
                    y=t;
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
                for(int d=ys[j];d>ys[j+1];d--){
                    y=d;
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
                if(ys[j]==ys[j+1]){
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
            
        
            }
        }
        for(int m=xs[j];m>xs[j+1];m--){
            x=m;
            if(((x+area_radius>=xt)&&(xt>=x))||((x-area_radius<=xt)&&(xt<=x))){
                for(int t=ys[j];t<ys[j+1];t++){
                    y=t;
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
                for(int n=ys[j];n<ys[j+1];n--){
                    y=n;
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                        }
                }
                if(ys[j]==ys[j+1]){
                    if(((y+area_radius>=yt)&&(yt>=y))||((y-area_radius<=yt)&&(yt<=y))){
                        return 1;
                        break;
                    }
                }
            }
        }
    }
    
return 0;
}
