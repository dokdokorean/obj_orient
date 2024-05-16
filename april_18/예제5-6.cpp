void increaseCircle(Circle &c){
    int r = c.getRadius();
    c.setRadius(r+1);
}
int main(){
    Circle waffle(30);
    increaseCircle(waffle);
    cout << waffle.getRadius()<<endl; 
}