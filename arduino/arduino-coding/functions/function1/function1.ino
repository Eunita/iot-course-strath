void fun(void){
    Serial.println("Would you look at me, I was declared before the setup() function, and am not even returning anything");

    delay(3000);
}

void setup(){
    Serial.begin(115200);
}
void loop(){
int holder;
holder=result(3,1,0);

Serial.println(holder);
//this is a comment

fun();
}

int result(int a, int b, int c){
    int answer;
    answer=a+b+c;
    return answer;
}
