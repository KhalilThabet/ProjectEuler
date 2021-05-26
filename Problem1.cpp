int sumMultiples(int argc,int argv[],int N){
    int sum=0;
    for(int i=0;i<argc;i++){
        for(int j=argv[i];j<N;j++){
            if (j%argv[i]==0 ) sum+=j;
        }
    }
    for(int i=2;i<N;i++){
        int x=0;
        for(int j=0;j<argc;j++){
            if (i%argv[j]==0 ) x+=1;
        }
        if (x==argc) sum-=i*(argc-1);
    }
    cout<< sum<<endl;
}
