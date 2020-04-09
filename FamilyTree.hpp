#ifndef FamilyTree
#define FamilyTree
#include <string>
using namespace std;

namespace family{

    class leaf{
        private:
        std::string nameData;
        leaf* father;
        leaf* mother;
        public:
         void setData(std::string name){ this->nameData=name;}
            
        
        leaf(){}
        leaf(std::string nameData){this->nameData = nameData;}
    };
    
    
    class Tree{
        private:
        leaf t;
        public:
        Tree(std::string root){t.setData(root);}
        Tree addFather(const std::string son,const std::string father);
        Tree addMother(const std::string son,const std::string father);
        void display();
        std::string relation(const std::string);
        std::string find(const std::string);
        void remove(const std::string);
    };


        

        
 



}





#endif

