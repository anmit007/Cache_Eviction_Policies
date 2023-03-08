#include <bits/stdc++.h>
using namespace std ;

class RRCache 
{

private:
int capacity ;
unordered_map<int,int>cache;

public :

RRCache(int capacity)
{
	this->capacity= capacity;
}

int get(int key)
{

	if(cache.find(key)!=cache.end())
	{
		return cache[key];
	}else
	{
		cout << "Cache Miss,Key not found ";
		return -1;
	}

}

 void put(int key, int value) {
        // Check if the key already exists in the cache
        if (cache.find(key) != cache.end()) {
  
            cache[key] = value;
        }
        if (cache.size() == capacity) {
            int random_index = rand() % capacity;
            auto it = cache.begin();
            advance(it, random_index);
            cache.erase(it);
        }
        cache.insert({ key, value });
    }
};

int main()
{
srand(time(nullptr));

RRCache cache(2);
cache.put(2,9);
cache.put(3,8);
cache.put(4,7);

for(int i = 2 ;i < 5 ; i++)
{
	cout << cache.get(i) << endl;
}

  
}