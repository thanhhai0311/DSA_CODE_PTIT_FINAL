//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int tc;
//	cin >> tc;
//	for(int t=0; t<tc; t++){
//		int n, k;
//		cin >> n >> k;
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		long long tong=0;
//		for(int i=0; i<k; i++){
//			tong+=a[i];
//		}
//		long long max=tong, chiso=0;
//		for(int i=k; i<n; i++){
//			tong=tong-a[i-k]+a[i];
//			if(tong>max){
//				max=tong;
//				chiso=i-k+1;
//			}
//		}
//		cout << max << endl;
//		for(int i=0; i<k; i++){
//			cout << a[chiso+i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n, k;
//		cin >> n >> k;
//		int a[1001];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		long long sum=0;
//		for(int i=0; i<k; i++){
//			sum+=a[i];
//		}
//		long long res=sum, idx=0;
//		for(int i=k; i<n; i++){
//			sum=sum-a[i-k]+a[i];
//			if(sum>res){
//				res=sum;
//				idx=i-k+1;
//			}
//		}
//		cout << res << endl;
//		for(int j=0; j<k; j++){
//			cout << a[idx+j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int tc;
//	cin >> tc;
//	for(int t=0; t<tc; t++){
//		int n, k;
//		cin >> n >> k;
//		int a[n];
//		int dem=0;
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//			if(a[i]<=k) dem++;
//		}
//		int demcs=0;
//		for(int i=0; i<dem; i++){
//			if(a[i]<=k) demcs++;
//		}
//		int res=demcs;
//		for(int i=dem; i<n; i++){
//			if(a[i-dem]<=k) demcs--;
//			if(a[i]<=k) demcs++;
//			if(demcs>=res) res=demcs;
//		}
//		cout << dem-res << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int n, densang, denhong;
//	cin >> n >> densang >> denhong;
//	int a[n];
//	for(int i=0; i<n; i++){
//		a[i]=1;
//	}
//	for(int i=1; i<=denhong; i++){
//		int x;
//		cin >> x;
//		a[x-1]=0;
//	}
//	int dem=0;
//	for(int i=0; i<densang; i++){
//		if(a[i]==1) dem++;
//	}
//	int res=dem;
//	for(int i=densang; i<n; i++){
//		if(a[i-densang]==1) dem--;
//		if(a[i]==1) dem++;
//		if(dem>res) res=dem;
//	}
//	cout << densang-res;
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		set<int> s;
		for(int i=0; i<k; i++){
			s.insert(a[i]);
		}
		if(s.size()!=k){
			cout << "YES" << endl;
			break;
		}
		int ok=0;
		for(int i=k; i<n; i++){
			s.erase(a[i-k]);
			s.insert(a[i]);
			if(s.size()!=k){
				cout << "YES" << endl;
				ok=1;
			}
		}
		if(ok==0) cout << "NO" << endl;
	}
	return 0;
}
