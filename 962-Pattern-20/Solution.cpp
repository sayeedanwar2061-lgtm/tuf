class Solution {
public:
    void pattern20(int n) {
        int s = n*2;
        int star = 0;
        for(int i=0;i<n;i++){
            s = s-2;
            star = star+1;
            for(int j=0;j<star;j++){
                cout << "*";
            }
            for(int j=0;j<s;j++){
                cout << " ";
            }
            for(int j=0;j<star;j++){
                cout << "*";
            }
            cout << endl;
        }
        s=0;
        star = n;
        for(int i=1;i<n;i++){
            s = s+2;
            star = star-1;
            for(int j=0;j<star;j++){
                cout << "*";
            }
            for(int j=0;j<s;j++){
                cout << " ";
            }
            for(int j=0;j<star;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};