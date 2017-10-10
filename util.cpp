/* Returns Position of maximum element from vector v */
template <typename t>
long long int max_element_from_vector( vector<t>v, t key){
        for(long long int i=0;i<v.size();i++)
                if(v[i]==key)return i;

        return -1;
}

