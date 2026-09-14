class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        int xa2= rec1[2];
        int ya2= rec1[3];
        int xb1= rec2[0];
        int yb1= rec2[1];
        int xa1 = rec1[0];
        int ya1 = rec1[1];
        int xb2 = rec2[2];
        int yb2 = rec2[3];
         return (xa1 < xb2 && xb1 < xa2 && ya1 < yb2 && yb1 < ya2);
        return false;
    }
};