int get_score(short score, int start, int stop, int now) {
    int d;
    if (now<=start)
        score=score; 
    if((now>start)&&(now<stop)){
        score=score-((now-start)*score)/(2*(stop-start));

    }

    if(now>=stop){
       if(score%2==1)
              score=(score/2)+1;
       else
        score=score/2;}
    return score;
}
