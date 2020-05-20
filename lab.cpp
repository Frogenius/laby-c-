 #include<iostream>

using namespace std;

strukt book {
	char *text;
	int max_size;
	char isbn [20];
	int size;
};
void get_text(strukt Book *b) {
	b->text = (char*)malloc(10);
	int i = 0;
	int z;
	do {
		z =getchar();
		if (z==EOF) {
		}  
		b->text[i++]=z;
	} while (z != '.');
	b->text[i]='\0';
	b->size = i;

}
int main()
{ 
	Book ansic;
	get_text(&ansic);
	
	system ("pause");
	return 0;
}
