#include <iostream>
#include <vector>

using namespace std;

class SolutionThirtyFour{
public:
	int kthSmallest(vector<vector<int>>& matrix, int k){
		int n=matrix.size();
		int left=matrix[0][0], right=matrix[n-1][n-1];
		while(left<right){
			int mid=left+(right-left)/2;
			int cnt=0;
			int j=n-1;
			//recorriendo las filas de la matrix con for
			for(int i=0; i<n; i++){
				/*cada que un elemento es mayor que mid se ignora y se desliza
				hacia la izquierda*/
				while(j>=0 && matrix[i][j]>mid){
					j--;
				}
				cnt+=(j+1);
			}
			//aqui se recalcula de nuevo mid
			if(cnt<k) left=mid+1;
			else right=mid;
		}
		return left;
	}
};

int main(){
	cout<<" cool!"<<endl;
	return 0;
}