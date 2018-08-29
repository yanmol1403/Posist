#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
void CreateGenesisNode(void);
void findLongestChainGenesis(void);
void CreateChildNode(void);
void encrypt(void);
void decrypt(void);
void verifyNode(void);
void editValue(void);
void TransferOwner(void);
void findLongestChain(void);
void merge(void);
struct node
{
  char data[100];
  long nodeNumber;
  struct node *referenceNodeId;
  struct node *childReferenceNodeId;
  struct node *genesisReferenceNodeId;
  char HashValue[100];
};
 struct node* start;
int main()
{
  int choice;
  printf("enter choices :");
  scanf("%d",&choice);

switch(choice)
{
case 1:
CreateGenesisNode();
break;

case 2:
CreateChildNode();
break;

case 3:
merge();
break;

case 4:
encrypt();
break;

case 5:
decrypt();
break;

case 6:
verifyNode();
break;

case 7:
editValue();
break;

case 8:
TransferOwner();
break;

case 9:
findLongestChainGenesis();
break;

case 10:
findLongestChain();
break;

}

return 0;
}
void CreateGenesisNode()
{
  
  struct node* node = (struct node*)malloc(sizeof(struct node));
  start=node;
  node->referenceNodeId==NULL;                                                   //genesis node have no parent
  node->childReferenceNodeId=NULL;
  node->genesisReferenceNodeId=NULL;  
  
}

void editValue()
{

}
void encrypt()
{
  char name[100];
  float value;
  printf("enter name of owner for node");
  gets(name);
  printf("enter value for genesis node");
  scanf("%f",value);
  
}

void verifyNode()
{
    
}
void TransferOwner()
{
    
}
void findLongestChain()
{
    
}
void merge()
{
    
}
void decrypt()
{
    
}
void findLongestChainGenesis()
{
    
}
void CreateChildNode()
{
    
}
