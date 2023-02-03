// #include<iostream>
// using namespace std;
// string get_string(int d)
// {
//     if(d==2){
//         return "abc";
//     }
//     if(d==3){
//         return "def";
//     }
//     if(d==4){
//         return "ghi";
//     }
//     if(d==5){
//         return "jkl";
//     }
//     if(d==6){
//         return "mno";
//     }
//     if(d==7){
//         return "pqrs";
//     }
//     if(d==8){
//         return "tuv";
//     }
//     if(d==9){
//         return "wxyz";
//     }
// }
// int  keypad(string *output,int n)
// {
//     if(n==0){
//         output[0]="";
//         return 1;
//     }
//     int last_digit=n%10;
//     int small_digit=n/10;
    
//     int small=keypad(output,small_digit);
//     string option=get_string(last_digit);

//     for(int i=0;i<option.length()-1;i++){
//         for(int j=0;j<small;j++){
//             output[j+(i+1)*small]=output[j];
//         }
//     }
//     int k=0;
//     for(int i=0;i<option.length();i++){
//         for(int j=0;j<small;j++){
//             output[k]=output[k]+output[i];
//             k++;
//         }
//     }
//     return small*option.length();
// }

// int main(){
//     int num;
//     cin >> num;
//     string output[10000];
//     int count = keypad(output,num);
//     for(int i = 0; i < count && i < 10000; i++){
//         cout << output[i] << endl;
//     }
//     return 0;
// }


