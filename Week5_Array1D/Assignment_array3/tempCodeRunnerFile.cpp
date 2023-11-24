vector<int>arr;
arr.push_back(1);
arr.push_back(1);
arr.push_back(3);
arr.push_back(4);
arr.push_back(3);
// sort(arr.begin(), arr.end());
int count =0;
for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size(); j++){
        if(arr[i] != arr[j])
        {
            count = arr[i];
            
        }
    }

}
cout <<"the unique number of the array is :"<<count;




