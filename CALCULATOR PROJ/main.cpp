#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
    system("color 0a");
    cout<<"  Hi...\n**********\nPress 1 for + / - / x / \'/\' / pow / sqrt or %\nPress 2 for Conversions\nPress 3 to calculate number systems operations\nPress 4 to calculate the GPA\n"<<endl;

    int op;
    cout<<"-Enter your choice : ";
    cin>>op;
    if (op==1){

            cout<<"Enter your operation  \'s\' for sqrt and \'p\' for power \'+\' for summing and so on...\n";
            float num1,num2;
            char opr;
            cout<<"Enter the sign of operation : ";
            cin>>opr;

            if (opr=='P'||opr=='S'||opr=='p'||opr=='s'){
                int base,power;
                switch(opr){
                    case 'S':case 's':
                        float x,i,z ;
                        cout << "Enter squared number : ";
                        cin>>x ;
                        if (x<0)
                            cout << "Wrong number...\a\n";
                        else{
                            for(i=0;i*i<=x;i++) ;
                            z=i-1 ;
                            cout<<"the result is : "<<z ; }break;
                    case 'P':case 'p':
                        cout<<"Enter Base number : ";
                        cin>>base;
                        cout<<"Enter Power number : ";
                        cin>>power;
                        if (power>=0){
                        int sum=1;
                        for(int i=1; i<=power; i++)
                            sum*=base;
                        cout<<"\nThe result of power = "<<sum <<endl;}
                        else cout << "Wrong power number...\a\n";


                                        }}

            else if (opr=='+'||opr=='-'||opr=='*'||opr=='/'||opr=='%'){
                cout<<"Enter First number : ";
                cin>>num1;
                cout<<"Enter Second number : ";
                cin>>num2;

            switch(opr){
            case '+':
                cout<<"The result of Sum = "<<num1+num2<<endl;
                break;
            case '-':
                cout<<"The result of Subtraction = ";
                    if (num1>=num2)
                        cout <<num1-num2;
                    else
                        cout <<"-"<<num2-num1;
                break;
            case '*':
                cout<<"The result of Multiplication = "<<num1*num2<<endl;
                break;
            case '/':
                if(num2==0)
                cout<<"You cannot divide by ZERO !\a\n"<<endl;
                else
                cout<<"The result of Devision = "<<num1/num2<<endl;
                break;
            case '%':
                cout<<"The result of remainder = "<< (int)num1% (int)num2<<endl;
                break;
            default:
                cout<<"wrong operation!!\a";break;
            }
            }}
        else if(op==2){
            char from,to ;
            cout << "Convert from (Binary - Decimal - Octal - Hex)?? **by using the First Character** \n--->";
            cin >> from ;


                    if(from=='b'||from=='B'){
            cout << "From Binary to (Decimal - Octal - Hex)?? *by using the First Character* \n--->";
            cin >> to ;
            if(to!='d' && to!='D' && to!='o' && to!='O' && to!='h' && to!='H')
                cout << "you entered wrong character...\a\n";
            else{
                        int sizee  ,t=1 ;
                        cout<< "Enter size of bits  : ";
                        cin >>sizee;
                        if (sizee>0&&sizee<=20){
                        char bin[sizee];
                        cout << "Enter your binary number : ";
                        for (int i=0 ; i<sizee ;i++){
                            cin >>  bin[i];
                            if (bin[i]=='0'||bin[i]=='1')
                                t=1;
                            else
                                {cout <<"wrong binary number..\a" ; t=0; break;}}

                        if (t==1){
                                int  decimal=0 ;
                                int value2 = 0 ,i=0;
                                char convertDECtoH_O[10];
                                for (int i=sizee-1 ,x=1 ;i>=0; x*=2 ,i--)
                                    decimal+= (bin[i]-'0') *x ;
                            switch(to){
                                case 'd':case 'D': cout << "\nDecimal number is : " << decimal << endl; break;
                                case 'o':case 'O': cout <<"\nOctal is : ";
                        for ( i = 0; decimal != 0; i++)
                        {
                            convertDECtoH_O[i] = decimal % 8;
                            convertDECtoH_O[i]  += 48;
                            decimal = decimal / 8;
                        }
                          for (i-=1; i >=0; i--)
                            cout << convertDECtoH_O[i];
                        cout << endl;


                                    break;
                                case 'h':case 'H': cout <<"HexDecimal is : ";


                        for ( i = 0; decimal != 0; i++)
                        {
                            value2 = decimal % 16;

                            if (value2 < 10)
                                convertDECtoH_O[i] = value2 + 48;
                            else
                                convertDECtoH_O[i] = value2 + 55;
                            decimal = decimal / 16;
                        }

                        for (int j = i-1; j >=0; j--)
                            cout << convertDECtoH_O[j];
                        cout << endl;

                                     break;

                                        }    }
                                            }else {cout <<"Wrong number";}}

                    }

                else if(from=='d'||from=='D'){

                cout << "From Decimal to (Binary - Octal - Hex)?? *by using the First Character* \n--->";
                cin >> to ;
            if(to!='b' && to!='B' && to!='o' && to!='O' && to!='h' && to!='H')
                cout << "you entered wrong character...\a\n";
            else{
                int  k=1 , base,dec=0,sizee;
                cout<<"enter how many numbers do you have :) : ";
                cin>>sizee;
                if (sizee>0&&sizee<=20){
                int num1[sizee] ;
                char num[sizee] ;
                cout << "Enter decimal number : ";
                for (int i=0;i<sizee;i++){
                    cin >> num[i] ;
            if (num[i]>='0'&&num[i]<='9')
                k=1;
            else
                {cout <<"Wrong Decimal number...\a\n"; k=0; break;}}
            for (int i=sizee-1 ,b=1 ;i>=0;b*=10,i--)
                dec+=(num[i]-'0')*b ;
        if(k==1){
            switch(to){
            case 'b':case 'B': cout << "\nBinary number is : "; base=2; break;
            case 'o':case 'O': cout << "\nOctal number is : "; base=8; break;
            case 'h':case 'H': cout << "\nHexDecimal number is : "; base=16; break;
                                        }

          int arr[base-1],i=0;
                    while(dec>0){
                      arr[i]=dec%base;
                      dec/=base;
                      i++;
                    }
                for(int y=i-1; y>=0; y--)
                    if(base==16)
                        switch(arr[y]){
                          case 10: cout<<'A';break;
                          case 11: cout<<'B';break;
                          case 12: cout<<'c';break;
                          case 13: cout<<'D';break;
                          case 14: cout<<'E';break;
                          case 15: cout<<'F';break;
                          default: cout << arr[y];
                                        }
                      else
                        cout<<arr[y];
                                            }}else cout<<"Wrong number...\n";}}

            else if(from=='o'||from=='O'){
        cout << "From Octal to (Binary - Decimal - Hex)?? *by using the First Character* \n";
        cin >> to ;
        if(to!='b' && to!='B' && to!='d' && to!='D' && to!='h' && to!='H')
                cout << "you entered wrong character...\a\n";
        else{
                    int n ,t=1  ;
                    cout <<"Enter size of bits :  ";
                    cin>> n;
                    if (n>0&&n<=20){
                    char oct[6]={0} ;
                if (n<20&&n>0){
                    cout << "\nEnter the Octal number : " ;
                    for (int i=0 ; i<n ;i++){
                        cin >> oct[i];
                    if(oct[i]<'0' || oct[i]>='8')
                        {t=0;
                        cout << "\nWrong Octal Number...\a\n" ; break;}
                    else t=1;               }

                if (t==1){
                        int dec = 0 , i=0 ,hex[8] ;
                        for (int i=n-1 ,j=1 ; (i>=0) ; i--)
                            {dec=dec+(oct[i]-'0')* j;
                            j*=8;}

                    switch(to){
                        case 'b':case 'B':
                                cout <<"\nBinary is " ;
                                for (int i=0;i<n;i++)
                                    switch(oct[i]){
                                        case '0': cout<<"000" ; break;
                                        case '1': cout<<"001" ; break;
                                        case '2': cout<<"010" ; break;
                                        case '3': cout<<"011" ; break;
                                        case '4': cout<<"100" ; break;
                                        case '5': cout<<"101" ; break;
                                        case '6': cout<<"110" ; break;
                                        case '7': cout<<"111" ; break; } break;
                        case 'd': case 'D':
                                cout << "Equivalent decimal number is : " << dec ; break;
                        case'h': case'H':
                                cout <<"\nHexDecimal is " ;
                                for (i ;dec>0;i++)
                                    {hex[i]=dec%16 ;
                                    dec/=16 ;}

                                for (i-=1;i>=0;i--)
                                    switch(hex[i]){
                                    case 10: cout << "A" ; break ;
                                    case 11: cout << "B" ; break ;
                                    case 12: cout << "C" ; break ;
                                    case 13: cout << "D" ; break ;
                                    case 14: cout << "E" ; break ;
                                    case 15: cout << "F" ; break ;
                                    default: cout << hex[i]  ; break ;
                                                 }
                                                 cout <<endl ;break;

                        default: cout << "you entered a wrong character...\a\n";  }   }
                        }
                        else
                            cout <<"wrong size...\a";  }
                            else cout <<"Wrong number...\n";}
                            }

            else if(from=='h'||from=='H'){
        cout << "From HexDecimal to (Binary - Decimal - Octal )?? *by using the First Character* \n";
        cin >> to ;
        if(to!='b' && to!='B' && to!='d' && to!='D' && to!='o' && to!='O')
                cout << "you entered wrong character...\a\n";
            else{
                    int hbit,no=1,natghextodecimal=0;
                    cout << "Enter how many bits you'll enter?: ";
                    cin >> hbit;
                if(hbit<=0||hbit>20)
                    cout<<"Wrong size...\a\n";
                else {
                    cout<<"\nEnter Hexadecimal number : ";
                    char h2b[hbit];
                    short int val[hbit];
                    for(int n=0;n<hbit; n++) {
                        cin>>h2b[n];
                        if(h2b[n]>='0' && h2b[n]<='9')
                            val[n] = h2b[n] - 48;
                        else if(h2b[n]>='A' && h2b[n]<='F')
                            val[n] = h2b[n] - 55;

                        else
                            {cout << "Wrong HexDecimal Number...\a";
                            no=0 ; break;}          }

            if (no==1){
                    int r=0,octalNum[8];
                for(int power=1,i=hbit-1  ;i>=0;  power*=16,i--)
                    natghextodecimal+=val[i]*power ;

                    switch(to){
                        case 'b':case 'B':
                        cout<<"\nyour Binary number is : ";
                        for(int i=0;(i<hbit) ;i++) {
                            switch(h2b[i]){
                            case '0': cout << "0000" ; break;
                            case '1': cout << "0001" ; break;
                            case '2': cout << "0010" ; break;
                            case '3': cout << "0011" ; break;
                            case '4': cout << "0100" ; break;
                            case '5': cout << "0101" ; break;
                            case '6': cout << "0110" ; break;
                            case '7': cout << "0111" ; break;
                            case '8': cout << "1000" ; break;
                            case '9': cout << "1001" ; break;
                            case 'A': cout << "1010" ; break;
                            case 'B': cout << "1011" ; break;
                            case 'C': cout << "1100" ; break;
                            case 'D': cout << "1101" ; break;
                            case 'E': cout << "1110" ; break;
                            case 'F': cout << "1111" ; break;
                                            } } break;
                        case 'd':case 'D':
                           cout<<"\nyour Decimal number is : " <<natghextodecimal <<endl; break;
                        case 'o':case 'O':
                            for (;natghextodecimal != 0;r++) {
                                octalNum[r] = natghextodecimal % 8;
                                natghextodecimal = natghextodecimal / 8;}
                            cout<<"your octal number is : ";
                            for (r = r-1; r >= 0; r--)
                                cout << octalNum[r];
                            cout << endl; break;
                        default: cout << "Wrong number system chosen...\a\n";
                                        }}}}}
            else
                cout<<"Wrong number system chosen..\a\n";

            }
        if(op==3){
            char system1 ;
            cout <<"\tPress 'B' for Binary operations\n\tPress 'O' for Octal operations\n\tPress 'H' for HexDecimal operations\n\t-your choice : ";
            cin >> system1 ;

            if (system1=='b'||system1=='B') {
                int n1,n2 , t=1 ,opr  ;

                    cout <<"Enter size of first number :  ";
                    cin>> n1;
                    if(n1>0&&n1<17){
                    char bin1[n1] ;
                        cout << "\nEnter first Binary number : " ;
                        for (int i=0 ; i<n1 ;i++){
                            cin >> bin1[i];
                        if ((bin1[i]=='0' || bin1[i]=='1'))
                          t=1;
                        else
                            {t=0; cout<< "The first number isn't Binary...\a\n" ; break;}
                                    }

                    cout <<"Enter size of second number :  ";
                    cin>> n2;
                    if(n2>0&&n2<17){
                    char bin2[n2] ;
                    cout << "Enter second Binary number : " ;
                    for (int i=0 ; i<n2 ;i++){
                            cin >> bin2[i];
                        if ((bin2[i]=='0' || bin2[i]=='1'))
                          t=1;
                        else
                            {t=0; cout<< "The second number isn't Binary...\a\n" ; break;}
                                    }

                if(t==1){
                        int dec1=0,dec2=0 ,res10,res[10], i=0;
                        char opr ;
                    for (int i=n1-1 ,exp=1;i>=0;i--)
                        {dec1 += (bin1[i]-'0')*exp ;
                        exp*=2 ;}
                    for (int i=n2-1 ,exp=1;i>=0;i--)
                        {dec2+=(bin2[i]-'0')*exp ;
                        exp*=2 ;}

                    cout << "Enter Operation you want to do\t(+ - *) : ";
                    cin >> opr ;

                    switch (opr){
                        case '+': res10=dec1+dec2; break;
                        case '-': res10=dec1-dec2; break;
                        case '*': res10=dec1*dec2; break;
                        default: cout<<"\nyou entered wrong operation...\a\n"; t=0;}
                    if (t==1){
                        cout << "\nThe result is : ";
                        for (i;res10>0;i++)
                            { res[i]=res10%2;
                            res10/=2; }

                        for (i-=1;i>=0;i--)
                            cout << res[i];
                }
                }
                    }else cout<<"wrong size number";
                }else cout<<"wrong size number";}

            else if (system1=='o'||system1=='O') {
                int n1 ,t=1  ;
                int dec1=0;

                    cout <<"\nEnter size of bits :  ";
                    cin>> n1;
                    if(n1>0&&n1<8){
                    char oct1[8]={0} ;
                if (n1<20&&n1>0){
                    cout << "Enter the Octal number : " ;
                    for (int i=0 ; i<n1 ;i++){
                        cin >> oct1[i];
                    if(oct1[i]<'0' || oct1[i]>='8')
                        {t=0;
                        cout << "\nWrong Octal Number...\a\n" ; break;}
                    else t=1;               }

                if (t==1){
                        int  i=0 ;
                        for (int i=n1-1 ,j=1 ; i>=0 ; i--)
                            {
                            dec1+=(oct1[i]-'0')* j;
                            j*=8;
                            }
                                }}
                 int dec2=0,i=0,n2 ;
                 cout <<"\nEnter size of bits :  ";
                    cin>> n2;
                    if(n2>0&&n2<8){
                    char oct2[6]={0};
                if (n2<20&&n2>0){
                    cout << "Enter the Octal number : " ;
                    for (; i<n2 ;i++){
                        cin >> oct2[i];
                    if(oct2[i]<'0' || oct2[i]>='8')
                        {t=0;
                        cout << "\nWrong Octal Number...\a\n" ; break;}
                    else t=1;               }

                if (t==1){
                        int  i=0  ;
                        for (int i=n2-1 ,j=1 ; i>=0 ; i--)
                            {
                            dec2+=(oct2[i]-'0')* j;
                            j*=8;
                            }
                        }}

            if (t==1){

                cout<<"\nEnter the sign of the operation : ";
                char op;
                int res,arr[10],i=0;
                cin>>op;
                switch(op){
                    case '+': res=dec2+dec1; break;
                    case '-':
                        if(dec2>=dec1)
                            res=dec2-dec1;
                        else
                            res=dec1-dec2;
                            break;
                    case '*': res=dec2*dec1; break;
                            }
                cout <<"the result is : ";
            while(res>0){
                      arr[i]=res%8;
                      res/=8;
                      i++;
                    }
                    if ((dec2>dec1)&&op=='-')
                        cout<<"-";
                    for(int y=i-1; y>=0; y--)
                        cout << arr[y];
                        cout<<"\n\n";
}}else cout<<"wrong size number";
}else cout<<"wrong size number\n";}
            else if (system1=='h'||system1=='H') {

                int V=0,no=1,natghextodecimal[V];
                for(;V<=1&&no==1;V++) {
                    int hbit;
                    cout<<"\nenter size of the number : ";
                    cin>>hbit;
                    if(hbit<=0||hbit>20)
                       { cout<<"error in your input\n"; no=0;   break;  }


                    else {
                        cout<<"Hexadecimal number ["<<V+1<<"] : ";
                        char h2b[hbit];
                        short int val[hbit];
                        for(int n=0;n<hbit; n++)
                            {
                            cin>>h2b[n];
                            if(h2b[n]>='0' && h2b[n]<='9')
                                val[n] = h2b[n] - 48;
                            else if(h2b[n]>='A' && h2b[n]<='F')
                                val[n] = h2b[n] - 55;
                            else
                                {cout << "Wrong Hexadecimal Number...\a"; no=0; break;}
                                                }
            if (no==1){
                    natghextodecimal[V]=0;
                 for(int power=1,i=hbit-1  ;i>=0;  power*=16,i--)
                    natghextodecimal[V]+=val[i]*power;
                                     }}}

            if(no==1){
                long int DECinput;
                char Op0;
                         cout<<endl<<"Operations: '+' '-' '*' : ";
                         cin>>Op0;
                         switch(Op0) {
                     case '+': DECinput= natghextodecimal[0] + natghextodecimal[1];break;
                     case '-':
                            if (natghextodecimal[0] >= natghextodecimal[1])
                                DECinput= natghextodecimal[0] - natghextodecimal[1];
                            else if (natghextodecimal[1] > natghextodecimal[0])
                                {DECinput= natghextodecimal[1] - natghextodecimal[0];
                                Op0='0';}
                                break;
                     case '*': DECinput= natghextodecimal[0] * natghextodecimal[1];break;
                     default:
                         cout<<"Unknown Operation...\a\n";
                         no=0;
                                    }

            if(no==1){
                if (Op0=='0')
                    cout << "-";
                int value2 = 0 ,i=0;
                char convertDECtoHEX[8];
                for (i; DECinput != 0; i++){

                    value2 = DECinput % 16;
                    if (value2 < 10)  convertDECtoHEX[i] = value2 + 48;
                    else    convertDECtoHEX[i] = value2 + 55;
                    DECinput = DECinput / 16;  }

            for (int j = i-1; j >=0; j--)
                cout << convertDECtoHEX[j];
                    cout << endl;
                        }}
                                                            }}
        if(op==4)
        {
            double course[6],hours[6]={3,2,3,4,4,2};
    string courseName[6]={"Math","Management","physics","CS","Programming","English"};
    double sum=0;
    int t;
    for(int i=0; i<6; i++){
        cout<<"Enter course points of "<<courseName[i]<<" : ";
        cin>>course[i];
        if(course[i]<0||course[i]>hours[i]){
            cout<<endl<<"you have entered a number not a points of "<<courseName[i]<<" hours...\a\n";
            t=0;
            break;
        }

         else {
                t=1;
                sum+=course[i];
         }
        }
    if(t==1){
    double c ;
    c = (sum*4)/18;
    if(c>3.70&&c<=4)
        cout<<"\n--->your GPA is A+\n";

    else if(c>3.300000&&c<=3.700000)
        cout<<"\n--->your GPA is B+\n";

    else if(c>3.000000&&c>=3.300000  )
        cout<<"\n--->your GPA is B\n";

    else if(c<=3.000000&&c>2.700000)
        cout<<"\n--->your GPA is B-\n";

    else if(c<=2.700000&&c>2.300000)
        cout<<"\n--->your GPA is c+\n";

    else if(c<=2.300000&&c>2.000000)
        cout<<"\n--->your GPA is c\n";

    else if(c<=2.000000&&c>1.700000)
        cout<<"\n--->your GPA is c-\n";

    else if(c<1.700000&&c>=1.300000)
        cout<<"\n--->your GPA is D+\n";

    else if(c>=1.000000&&c<1.300000)
        cout<<"\n--->your GPA is D\n";

    else if(c>=0.000000&&c<1.000000)
        cout<<"\n---> your GPA is F\n";

    }
        }


        else if (op!=1&&op!=2&&op!=3&&op!=4) {cout<<"Wrong: Enter number from 1 to 4...\a\n";
         cout<<"wrong number chosen :)";}

    }
