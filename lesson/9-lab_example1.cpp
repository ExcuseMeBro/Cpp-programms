#include <iostream>
#include <vector>
int main(){
    
    //Vector hosil qilish
    std::vector<int> vec;
    // Vectorga element qo`shish
    for(int i=0;i<99;++i){
        vec.push_back(i);
    }
    // Vectorni chop qilish ya'ni ekranga chiqarish
    for(int i=0;i<vec.size();++i){
        std::cout<<vec.at(i)<<std::endl;
    }
    // Vectorning oxirgi elementini o`chirish
    vec.pop_back();
    //Vectorning 12-elementini 120 ga lamashtirish
    vec.insert(vec.begin()+20,120);
    // Vectorni hajmi
    int sz=vec.size();
    //Vector quvvati
    int ca=vec.capacity();
    // 12-chi o`rindan boshlab 23-o`ringacha bo`lgan elementlarni o`chirish
    vec.erase(vec.begin()+12,vec.begin()+23);
    // Vectordagi barcha elementlarni o`chirish
    vec.clear();
    std::cin.get();
    
}