#include <stdio.h>
#include <time.h>
#include <string.h>
int point1=0,point2=0,findresultt=0,turncopy;
int emergencyExit=0;
struct pointss{
	char Name[100];
	char pointEach[100];
	int pointOfEach;
};
struct pointss pointRow[100];
struct pointss pointRow2[100];
int f1=0;
char savedData[71]="hi33";
char savedData2[79]="hi33";
int requestSave1=0,requestSave2=0;
int timePassed1=0,timePassed2=0;
void Search_in_File2(char *fname, char *str,int FindNumOrReturnStr,int whichResult) {
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
	int checkLines;
	char s1[40];
	fopen_s(&fp, fname, "r");
	if (FindNumOrReturnStr==1)
	{
		while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
		find_result++;
		if (find_result==whichResult)
		{
			fscanf(fp,"%s",s1);
            //printf("%s\n",s1);
			strcpy(savedData2,s1);
		}
		}
        
        // return 0;
	}
	}
	else if (FindNumOrReturnStr==0)
	{
	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
		find_result++;
		}	
	}
	//printf("number of results=%d\n",find_result);
    // return find_result;
    findresultt=find_result;
	}
    else
    {
        printf("why");
        // return 0;
    }
	if(fp) {
		fclose(fp);
	}
}
void Search_in_File(char *fname, char *str,int FindNumOrReturnStr,int whichResult) {
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
	int checkLines;
	char s1[40];
	fopen_s(&fp, fname, "r");
	if (FindNumOrReturnStr==1)
	{
		while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
		find_result++;
		if (find_result==whichResult)
		{
			fscanf(fp,"%s",s1);
            //printf("%s\n",s1);
			strcpy(savedData,s1);
		}
		}
        
        // return 0;
	}
	}
	else if (FindNumOrReturnStr==0)
	{
	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
		find_result++;
		}	
	}
	//printf("number of results=%d\n",find_result);
    // return find_result;
    findresultt=find_result;
	}
    else
    {
        printf("why");
        // return 0;
    }
	if(fp) {
		fclose(fp);
	}
}
void makeTheChanges(char reshte[],int a[8][8])
{
    if (reshte[0]=='1')
    {
        turncopy=1;
    }
    else{
        turncopy=-1;
    }
    int f=1;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (reshte[f])
            {
            case '0':
                a[i][j]=0;
                break;
            case '1':
                a[i][j]=1;
                break;
            case '2':
                a[i][j]=-1;
                break;
            case '3':
                a[i][j]=2;
                break;
            default:
                break;
            }
            f++;
        }
        
    }
    int qw=0;
    for (int i = 0; i < 3; i++)
    {
        switch (reshte[f])
            {
            case '0':
                qw=qw*10;
                break;
            case '1':
                qw=qw*10+1;
                break;
            case '2':
                qw=qw*10+2;
                break;
            case '3':
                qw=qw*10+3;
                break;
            case '4':
                qw=qw*10+4;
            break;
            case '5':
                qw=qw*10+5;
            break;
            case '6':
                qw=qw*10+6;
            break;
            case '7':
                qw=qw*10+7;
            break;
            case '8':
                qw=qw*10+8;
            break;
            case '9':
                qw=qw*10+9;
            break;
            default:
                break;
            }
            f++;
    }
    point1=qw;
    qw=0;
    for (int i = 0; i < 3; i++)
    {
        switch (reshte[f])
            {
            case '0':
                qw=qw*10;
                break;
            case '1':
                qw=qw*10+1;
                break;
            case '2':
                qw=qw*10+2;
                break;
            case '3':
                qw=qw*10+3;
                break;
            case '4':
                qw=qw*10+4;
            break;
            case '5':
                qw=qw*10+5;
            break;
            case '6':
                qw=qw*10+6;
            break;
            case '7':
                qw=qw*10+7;
            break;
            case '8':
                qw=qw*10+8;
            break;
            case '9':
                qw=qw*10+9;
            break;
            default:
                break;
            }
            f++;
    }
    point2=qw;
    
    
}
void makeTheChanges2(char reshte[],int a[8][8])
{
    if (reshte[0]=='1')
    {
        turncopy=1;
    }
    else{
        turncopy=-1;
    }
    int f=1;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (reshte[f])
            {
            case '0':
                a[i][j]=0;
                break;
            case '1':
                a[i][j]=1;
                break;
            case '2':
                a[i][j]=-1;
                break;
            case '3':
                a[i][j]=2;
                break;
            default:
                break;
            }
            f++;
        }
        
    }
    int qw=0;
    for (int i = 0; i < 3; i++)
    {
        switch (reshte[f])
            {
            case '0':
                qw=qw*10;
                break;
            case '1':
                qw=qw*10+1;
                break;
            case '2':
                qw=qw*10+2;
                break;
            case '3':
                qw=qw*10+3;
                break;
            case '4':
                qw=qw*10+4;
            break;
            case '5':
                qw=qw*10+5;
            break;
            case '6':
                qw=qw*10+6;
            break;
            case '7':
                qw=qw*10+7;
            break;
            case '8':
                qw=qw*10+8;
            break;
            case '9':
                qw=qw*10+9;
            break;
            default:
                break;
            }
            f++;
    }
    point1=qw;
    qw=0;
    for (int i = 0; i < 3; i++)
    {
        switch (reshte[f])
            {
            case '0':
                qw=qw*10;
                break;
            case '1':
                qw=qw*10+1;
                break;
            case '2':
                qw=qw*10+2;
                break;
            case '3':
                qw=qw*10+3;
                break;
            case '4':
                qw=qw*10+4;
            break;
            case '5':
                qw=qw*10+5;
            break;
            case '6':
                qw=qw*10+6;
            break;
            case '7':
                qw=qw*10+7;
            break;
            case '8':
                qw=qw*10+8;
            break;
            case '9':
                qw=qw*10+9;
            break;
            default:
                break;
            }
            f++;
    }
    point2=qw;
    qw=0;
    for (int i = 0; i < 3; i++)
    {
        switch (reshte[f])
            {
            case '0':
                qw=qw*10;
                break;
            case '1':
                qw=qw*10+1;
                break;
            case '2':
                qw=qw*10+2;
                break;
            case '3':
                qw=qw*10+3;
                break;
            case '4':
                qw=qw*10+4;
            break;
            case '5':
                qw=qw*10+5;
            break;
            case '6':
                qw=qw*10+6;
            break;
            case '7':
                qw=qw*10+7;
            break;
            case '8':
                qw=qw*10+8;
            break;
            case '9':
                qw=qw*10+9;
            break;
            default:
                break;
            }
            f++;
    }
    timePassed1=qw;
    qw=0;
    for (int i = 0; i < 3; i++)
    {
        switch (reshte[f])
            {
            case '0':
                qw=qw*10;
                break;
            case '1':
                qw=qw*10+1;
                break;
            case '2':
                qw=qw*10+2;
                break;
            case '3':
                qw=qw*10+3;
                break;
            case '4':
                qw=qw*10+4;
            break;
            case '5':
                qw=qw*10+5;
            break;
            case '6':
                qw=qw*10+6;
            break;
            case '7':
                qw=qw*10+7;
            break;
            case '8':
                qw=qw*10+8;
            break;
            case '9':
                qw=qw*10+9;
            break;
            default:
                break;
            }
            f++;
    }
    timePassed2=qw;
    qw=0;
    switch (reshte[f])
            {
            case '0':
                requestSave1=0;
                break;
            case '1':
                requestSave1=1;
                break;
            case '2':
                requestSave1=2;
            default:
                break;
            }
            f++;
    switch (reshte[f])
            {
            case '0':
                requestSave2=0;
                break;
            case '1':
                requestSave2=1;
                break;
            case '2':
                requestSave2=2;
            default:
                break;
            }
            f++;
}
char cellP(int a)
{
    if (a==0) {
        return ' ';
    }
    if (a==1) {
        return '#';
    }
    if (a==-1) {
        return 'O';
    }
    if (a==2) {
        return '.';
    }
    return 'l';
}
void avCell(int a[8][8],int turn)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (a[i][j]==2)
            {
                a[i][j]=0;
            }
            
        }
        
    }
    
    int i,j,k,l,t=0;
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            if (a[i][j]==turn) {
                k=i;
                l=j;
                k--;
                l--;
                t=0;
                while (k>=0&&l>=0) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        k--;
                        l--;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                l--;
                t=0;
                while (l>=0) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        l--;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                l--;
                k++;
                t=0;
                while (l>=0&&k<8) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        l--;
                        k++;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                k++;
                t=0;
                while (k<8) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        k++;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                k++;
                l++;
                t=0;
                while (k<8&&l<8) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        k++;
                        l++;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                l++;
                t=0;
                while (l<8) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        l++;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                k--;
                l++;
                t=0;
                while (k>=0&&l<8) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        k--;
                        l++;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                k=i;
                l=j;
                k--;
                t=0;
                while (k>=0) {
                    if (a[k][l]*-1==turn) {
                        t=1;
                        k--;
                        continue;
                    }
                    else if (a[k][l]==turn) {
                        break;
                    }
                    else if (a[k][l]==0&&t==1) {
                        a[k][l]=2;
                        break;
                    }
                    else if (a[k][l]==2) {
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                
            }
        }
    }
}
void copyTable(int a[8][8],int b[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            b[i][j]=a[i][j];
        }
        
    }
    
}
void prTable(int a[8][8],int turn)
{
    avCell(a,turn);
    printf("   1   2   3   4   5   6   7   8\n");
    printf("  ___ ___ ___ ___ ___ ___ ___ ___\n");
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("1| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][0]),cellP(a[1][0]),cellP(a[2][0]),cellP(a[3][0]),cellP(a[4][0]),cellP(a[5][0]),cellP(a[6][0]),cellP(a[7][0]));
    printf(" |___|___|___|___|___|___|___|___|\n");
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("2| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][1]),cellP(a[1][1]),cellP(a[2][1]),cellP(a[3][1]),cellP(a[4][1]),cellP(a[5][1]),cellP(a[6][1]),cellP(a[7][1]));
    printf(" |___|___|___|___|___|___|___|___|\n"); 
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("3| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][2]),cellP(a[1][2]),cellP(a[2][2]),cellP(a[3][2]),cellP(a[4][2]),cellP(a[5][2]),cellP(a[6][2]),cellP(a[7][2]));
    printf(" |___|___|___|___|___|___|___|___|\n");
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("4| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][3]),cellP(a[1][3]),cellP(a[2][3]),cellP(a[3][3]),cellP(a[4][3]),cellP(a[5][3]),cellP(a[6][3]),cellP(a[7][3]));
    printf(" |___|___|___|___|___|___|___|___|\n"); 
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("5| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][4]),cellP(a[1][4]),cellP(a[2][4]),cellP(a[3][4]),cellP(a[4][4]),cellP(a[5][4]),cellP(a[6][4]),cellP(a[7][4]));
    printf(" |___|___|___|___|___|___|___|___|\n");
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("6| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][5]),cellP(a[1][5]),cellP(a[2][5]),cellP(a[3][5]),cellP(a[4][5]),cellP(a[5][5]),cellP(a[6][5]),cellP(a[7][5]));
    printf(" |___|___|___|___|___|___|___|___|\n");
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("7| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][6]),cellP(a[1][6]),cellP(a[2][6]),cellP(a[3][6]),cellP(a[4][6]),cellP(a[5][6]),cellP(a[6][6]),cellP(a[7][6]));
    printf(" |___|___|___|___|___|___|___|___|\n");
    printf(" |   |   |   |   |   |   |   |   |\n");
    printf("8| %c | %c | %c | %c | %c | %c | %c | %c |\n",cellP(a[0][7]),cellP(a[1][7]),cellP(a[2][7]),cellP(a[3][7]),cellP(a[4][7]),cellP(a[5][7]),cellP(a[6][7]),cellP(a[7][7]));
    printf(" |___|___|___|___|___|___|___|___|\n");
    if (turn==1) {
        printf("turn:black");
    }
    if (turn==-1) {
        printf("turn:white");
    }
    printf("\nEmergency exit with 0 0\n");
    printf("enter your cell:\n");
}
// int avCellN(int a[8][8],int turn)
// {
//     //prTable(a, turn);
//     avCell(a, turn);
//     int i;
//     int j;
//     int t=0;
//     for (i=0; i<8; i++) {
//         for (j=0; j<8; j++) {
//             if (a[i][j]==2) {
//                 t=1;
//                 break;
//             }
//         }
//     }
//     return t;
// }
void revCells(int a[8][8],int turn,int i,int j)
{
    int k,l,t=0;
    k=i;
    l=j;
    k--;
    l--;
    int o;
    int q;
    int copyy1[8][8]={0};
    int copyy2[8][8]={0};
    while (k>=0&&l>=0) {
        if (a[k][l]*-1==turn) {
            t=1;
            copyy1[k][l]=1;
            k--;
            l--;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    l--;
    t=0;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (l>=0) {
        if (a[k][l]*-1==turn) {
            t=1;
            copyy1[k][l]=1;
            l--;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    t=0;
    k++;
    l--;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (k<8&&l>=0) {
        if (a[k][l]*-1==turn) {
            t=1;
            
           
            copyy1[k][l]=1;
            k++;
            l--;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    t=0;
    k++;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (k<8) {
        if (a[k][l]*-1==turn) {
            t=1;
            
            
            copyy1[k][l]=1;
            k++;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    k++;
    l++;
    t=0;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (k<8&&l<8) {
        if (a[k][l]*-1==turn) {
            t=1;
           
            copyy1[k][l]=1;
            k++;
            l++;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    l++;
    t=0;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (l<8) {
        if (a[k][l]*-1==turn) {
            t=1;
            copyy1[k][l]=1;
            l++;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    t=0;
    k--;
    l++;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (k>=0&&l<8) {
        if (a[k][l]*-1==turn) {
            t=1;
           
            copyy1[k][l]=1;
            k--;
            l++;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    k=i;
    l=j;
    k--;
    t=0;
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    while (k>=0) {
        if (a[k][l]*-1==turn) {
            t=1;
            copyy1[k][l]=1;
            k--;
            continue;
        }
        else if(a[k][l]==turn&&t==1)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    if (copyy1[o][q]==1) {
                        copyy2[o][q]=1;
                    }
                    
                }
                
            }
            break;
        }
        else if(a[k][l]==0)
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }
            break;
        }
        else
        {
            for (o=0; o<8; o++) {
                for (q=0; q<8; q++) {
                    
                    copyy1[o][q]=0;
                    
                }
                
            }

            break;
        }
    }
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            copyy1[o][q]=0;
            
        }
        
    }
    for (o=0; o<8; o++) {
        for (q=0; q<8; q++) {
            
            if (copyy2[o][q]==1) {
                a[o][q]*=-1;
                if (turn==1)
                {
                    point1++;
                }
                if (turn==-1)
                {
                    point2++;
                }
                
            }
            
        }
        
    }
}
void playGameNormal(int a[8][8],int turn)
{
    // int a[8][8]={0};
    // a[3][3]=-1;
    // a[4][4]=-1;
    // a[3][4]=1;
    // a[4][3]=1;
    int i,j,checkNotNull=0;
    int winner=0,userInput1,userInput2;
    // int turn=1;
    while (winner==0) {
        
        prTable(a,turn);
        
        while (1) {
            scanf("%d %d",&userInput1,&userInput2);
            if (userInput1==0&&userInput2==0)
            {
                turncopy=turn;
                emergencyExit=1;
                break;
            }
            
            userInput1--;
            userInput2--;
            if (a[userInput1][userInput2]==2) {
                a[userInput1][userInput2]=turn;
                revCells(a, turn, userInput1, userInput2);
                break;
            }
            else
            {
                printf("wrong answer enter again:\n");

            }
        }

//        if (avCellN(a,-1*turn)==0&&avCellN(a, turn)==0) {
//            winner=1;
//            break;
//        }
//        else if(avCellN(a,turn)!=0)
//        {
//            turn*=-1;
//        }
        if (emergencyExit==1)
            {
                break;
            }
        turn*=-1;
        avCell(a, turn);
        for (i=0; i<8; i++) {
            for (j=0; j<8; j++) {
                if (a[i][j]==2) {
                    checkNotNull=1;
                }
            }
        }
        if (checkNotNull==0) {
            turn*=-1;
            avCell(a, turn);
            for (i=0; i<8; i++) {
                for (j=0; j<8; j++) {
                    if (a[i][j]==2) {
                        checkNotNull=1;
                    }
                }
            }
        }
        if (checkNotNull==0) {
            break;
        }
        for (i=0; i<8; i++) {
            for (j=0; j<8; j++) {
                if (a[i][j]==2) {
                    a[i][j]=0;
                }
            }
        }
        checkNotNull=0;
    }
    int numBlack=0,numWhite=0;
    if (emergencyExit==0)
    {
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            if (a[i][j]==1) {
                numBlack++;
            }
            if (a[i][j]==-1) {
                numWhite++;
            }
        }
    }
    
    if (numWhite>numBlack) {
        printf("White is winner\nCells:%d",numWhite);
    }
    if (numWhite<numBlack) {
        printf("Black is winner\nCells:%d",numBlack);
    }
    if (numWhite==numBlack) {
        printf("Game draw\nBlack Cells:%d\nWhite Cells:%d",numBlack,numWhite);
    }
    }
}
void playTimeKeeper(int a[8][8],int turn,int saveTime1,int saveTime2,int saveReq1,int saveReq2)
{
    // int a[8][8]={0};
    // a[3][3]=-1;
    // a[4][4]=-1;
    // a[3][4]=1;
    // a[4][3]=1;
    int i,j,checkNotNull=0;
    double timee;
    int winner=0,userInput1,userInput2;
    int checkReturn1=0,checkReturn2=0;
    int t1[8][8],t2[8][8];
    copyTable(a,t1);
    copyTable(a,t2);
    clock_t st,en;
    int totalTimePlayer1=saveTime1,totalTimePlayer2=saveTime2,returnMode=0,requestt1=saveReq1,requestt2=saveReq2;
    int copyPoint1=0,copyPoint2=0,copyPoint3=0,copyPoint4=0;
    int timee1=0,timee2=0;
    while (winner==0)
    {
        if (totalTimePlayer1>=600)
        {
            break;
        }
        if (totalTimePlayer2>=600)
        {
            break;
        }
        prTable(a,turn);
        //printf("%d %d\n",point1,point2);
        // if (turn==1)
        // {
        //     prTable(t1,turn);
        // }
        // if (turn==-1)
        // {
        //     prTable(t2,turn);
        // }
        





        printf("BlackTime:%d Minutes %d Seconds\nWhiteTime:%d Minutes %d Seconds\n",(600-totalTimePlayer1)/60,(600-totalTimePlayer1)%60,(600-totalTimePlayer2)/60,(600-totalTimePlayer2)%60);
        printf("return with -1 and type -1 for white player 1 for black player:\n");
        st=clock();
        while (1)
        {
        
        scanf("%d %d",&userInput1,&userInput2);
        if (userInput1==0&&userInput2==0)
        {
            emergencyExit=1;
            turncopy=turn;
            timePassed1=totalTimePlayer1;
            timePassed2=totalTimePlayer2;
            requestSave1=requestt1;
            requestSave2=requestt2;
            break;
        }
        
        if (userInput1==-1&&userInput2==-1){
        
            if (requestt2<=1&&checkReturn2==0)
            {
                returnMode=1;
                 checkReturn2=1;

                break;
            }
            else
            {
                if (requestt2>1)
                {
                printf("you don't have returns!\n");
                }
                else if(checkReturn2==1){
                   printf("can't undo 2 times back to back!\n");

                }
                continue;
            }
            
        }
        if (userInput1==-1&&userInput2==1){
        
            if (requestt1<=1&&checkReturn1==0)
            {
                returnMode=1;
                checkReturn1=1;
                break;
            }
            else
            {
                if (requestt1>1)
                {
                printf("you don't have returns!\n");
                }
                else if(checkReturn1==1){
                   printf("can't undo 2 times back to back!\n");

                }
                continue;
            }
            
        }
        
        userInput1--;
        userInput2--;
        if (a[userInput1][userInput2]==2) {
                if (turn==1)
                {
                    copyPoint1=point1;
                    copyPoint2=point2;
                    copyTable(a,t1);
                }
                if (turn==-1)
                {
                    copyPoint3=point1;
                    copyPoint4=point2;
                    copyTable(a,t2);
                }
                
                a[userInput1][userInput2]=turn;
                revCells(a, turn, userInput1, userInput2);
                en=clock();
            timee=(double)(en-st)/CLOCKS_PER_SEC;
            if (turn==1)
            {
               totalTimePlayer1+=(int)timee;
               checkReturn1=0;
               timee1=(int)timee;
               
            }
             else if (turn==-1)
            {
            totalTimePlayer2+=(int)timee;
            checkReturn2=0;
            timee2=(int)timee;
            
            }        
            }
         else
            {
                printf("wrong answer enter again:\n");
                continue;

            }
            break;
        
        }
        if (emergencyExit==1)
        {
            break;
        }
        
        if (returnMode==1)
        {
            if (turn==1&&userInput2==1)
            {
                point1=copyPoint1;
                point2=copyPoint2;
                copyTable(t1,a);
                
                if (requestt1==0)
                {
                    totalTimePlayer1+=30;
                    requestt1++;
                }
                else{
                    totalTimePlayer1+=60;
                    totalTimePlayer2=totalTimePlayer2-timee1-timee2;
                    requestt1++;
                }
                turn=-1;
                timee1=0;
                timee2=0;
            }
            if (turn==-1&&userInput2==-1)
            {
                point1=copyPoint3;
                point2=copyPoint4;
                copyTable(t2,a);
                if (requestt2==0)
                {
                    totalTimePlayer2+=30;
                    requestt2++;
                }
                else{
                    totalTimePlayer2+=60;
                    totalTimePlayer1=totalTimePlayer1-timee1-timee2;
                    requestt2++;
                }
                turn=1;
                timee1=0;
                timee2=0;
            }
            if (turn==1&&userInput2==-1)
            {
                point1=copyPoint3;
                point2=copyPoint4;
                copyTable(t2,a);
                if (requestt2==0)
                {
                    totalTimePlayer2+=30;
                    requestt2++;
                }
                else{
                    totalTimePlayer2+=60;
                    totalTimePlayer1=totalTimePlayer1-timee1;
                    requestt2++;
                }
                turn=1;
                timee1=0;
                timee2=0;
            }
            if (turn==-1&&userInput2==1)
            {
                point1=copyPoint1;
                point2=copyPoint2;
                copyTable(t1,a);
                if (requestt1==0)
                {
                    totalTimePlayer1+=30;
                    requestt1++;
                }
                else{
                    totalTimePlayer1+=60;
                    totalTimePlayer2=totalTimePlayer2-timee2;
                    requestt1++;
                }
                turn=-1;
                timee1=0;
                timee2=0;
            }
            
        }
        
        turn*=-1;
        avCell(a, turn);
        for (i=0; i<8; i++) {
            for (j=0; j<8; j++) {
                if (a[i][j]==2) {
                    checkNotNull=1;
                }
            }
        }
        if (totalTimePlayer1>=600)
        {
            break;
        }
        if (totalTimePlayer2>=600)
        {
            break;
        }
        if (checkNotNull==0) {
            turn*=-1;
            avCell(a, turn);
            for (i=0; i<8; i++) {
                for (j=0; j<8; j++) {
                    if (a[i][j]==2) {
                        checkNotNull=1;
                    }
                }
            }
        }
        if (checkNotNull==0) {
            winner=1;
            break;
        }
        for (i=0; i<8; i++) {
            for (j=0; j<8; j++) {
                if (a[i][j]==2) {
                    a[i][j]=0;
                }
            }
        }
        checkNotNull=0;
        returnMode=0;

    }
    int numBlack=0,numWhite=0;
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            if (a[i][j]==1) {
                numBlack++;
            }
            if (a[i][j]==-1) {
                numWhite++;
            }
        }
    }
    if (emergencyExit==0)
    {
    
    if (winner==0)
    {
        if (totalTimePlayer1>=600)
        {
           printf("Time's up! Winner is white.\n");
           point1=0;
        }
        if (totalTimePlayer2>=600)
        {
            point2=0;
            printf("Time's up! Winner is Black.\n");
        }
        
        
    }
    else{
    if (numWhite>numBlack) {
        printf("White is winner\nNumber of cells:%d",numWhite);
    }
    if (numWhite<numBlack) {
        printf("Black is winner\nNumber of cells:%d",numBlack);
    }
    if (numWhite==numBlack) {
        printf("Game draw\nBlack cells:%d\nWhite cells:%d",numBlack,numWhite);
    }
    }
    }
}
void Point_Search(char *fname)
{
	FILE *fp;
	
	char temp[512];
	char s1[40],s2[40],s3[40],s4[40];
	fopen_s(&fp, fname, "r");
	
		while(fgets(temp, 512, fp) != NULL) {
			fscanf(fp,"%s",s1);
			//printf("%s\n",s1);
			strcpy(pointRow[f1].Name,s1);
			f1++;
		}
	if(fp) {
		fclose(fp);
	}
}
void strToInt()
{
	int rtt=0;
	for (int i = 0; i < f1; i++)
	{
		int qq2=0;
		int sv=0;
		while (pointRow[i].pointEach[qq2]!='\0')
		{
			switch (pointRow[i].pointEach[qq2])
			{
			case '0':
				sv=sv*10;
				break;
			case '1':
				sv=sv*10+1;
				break;
			case '2':
				sv=sv*10+2;
				break;
			case '3':
				sv=sv*10+3;
				break;
			case '4':
				sv=sv*10+4;
				break;
			case '5':
				sv=sv*10+5;
				break;
			case '6':
				sv=sv*10+6;
				break;
			case '7':
				sv=sv*10+7;
				break;
			case '8':
				sv=sv*10+8;
				break;
			case '9':
				sv=sv*10+9;
				break;
			default:
				break;
			}
			qq2++;
		}
		pointRow2[i].pointOfEach=sv;
		sv=0;
	}
	
	
}
int main() {
    int a[8][8]={0};
    printf("Welcome to the game\n");
    int gameMode;
    
    char hi1[60];
	char hi2[60];
	char hi3[60]="hi";
    printf("Player1 Name:");
    scanf("%s",hi1);
    printf("Player2 Name:");
    scanf("%s",hi2);
	int f=0;
	int lenght=0;
    int turn;
	while (hi1[f]!='\0')
	{
		hi3[f]=hi1[f];
		f++;
		lenght++;
	}
	f=0;
	while (hi2[f]!='\0')
	{
		hi3[f+lenght]=hi2[f];
		f++;
	}
    //Search_in_File("UnsavedNormal.txt",hi3,1,2);
    int exitGame;
    printf("Start a game?(1 for yes 0 for no):");
    scanf("%d",&exitGame);
    while (exitGame==1)
    {
       printf("Which mode do you want to play?(Enter 1 to play normal mode and 2 for play timekeeper mode)\n");
        scanf("%d",&gameMode);
    
    if (gameMode==1)
    {
        Search_in_File("UnsavedNormal.txt",hi3,0,0);
        int r=findresultt;
        if(r==0)
        {
            printf("You don't have any unfinished games. starting new game...\n\n%s is black\n\n",hi1);
            for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        a[i][j]=0;
                    }
                    
                }
            a[3][3]=-1;
            a[4][4]=-1;
            a[3][4]=1;
            a[4][3]=1;
            playGameNormal(a,1);
            if (emergencyExit==1)
            {
                //printf("1111111");
                FILE *fptr;

               
                fptr = fopen("UnsavedNormal.txt", "a");
                fprintf(fptr,"\n%s\n",hi3);
                if (turncopy==1)
                {
                     fprintf(fptr,"1");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"2");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"1");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"2");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"\n%s%s\n",hi2,hi1);
                if (turncopy==1)
                {
                     fprintf(fptr,"2");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"1");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"2");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"1");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fclose(fptr);
            }
            else{
            printf("\nPoint %s on this game:%d\nPoint %s on this game:%d\n",hi1,point1,hi2,point2);
            FILE *fptr2;
            fptr2 = fopen("TableOfPoints.txt", "a");
            fprintf(fptr2,"\n%s",hi1);
            fprintf(fptr2,"%d%d%d",point1/100,(point1/10)%10,point1%10);
            fprintf(fptr2,"\n%s",hi2);
            fprintf(fptr2,"%d%d%d",point2/100,(point2/10)%10,point2%10);
            fclose(fptr2);
            }
        }
        else
        {
            printf("You have %d unfinished games. which one do you want to play?(enter 0 for new game):",r);
            int y;
            scanf("%d",&y);
            if (y!=0)
            {
            
            
            //printf("%s",hi3);
            Search_in_File("UnsavedNormal.txt",hi3,1,y);
            //printf("%s",savedData);
            makeTheChanges(savedData,a);
            turn=turncopy;
            //printf("%d %d",point1,point2);
            //prTable(a,turn);
            
            }
            else{
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        a[i][j]=0;
                    }
                    
                }
                
                a[3][3]=-1;
                a[4][4]=-1;
                a[3][4]=1;
                a[4][3]=1;
                turn=1;
            }
            printf("\n%s is black.\n",hi1);
            playGameNormal(a,turn);
            if (emergencyExit==1)
            {
                FILE *fptr;

               
                fptr = fopen("UnsavedNormal.txt", "a");
                fprintf(fptr,"\n%s\n",hi3);
                if (turncopy==1)
                {
                     fprintf(fptr,"1");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"2");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"1");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"2");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"\n%s%s\n",hi2,hi1);
                if (turncopy==1)
                {
                     fprintf(fptr,"2");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"1");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"2");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"1");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fclose(fptr);
            }
            else{
            printf("\nPoint %s on this game:%d\nPoint %s on this game:%d\n",hi1,point1,hi2,point2);
            FILE *fptr2;
            fptr2 = fopen("TableOfPoints.txt", "a");
            fprintf(fptr2,"\n%s",hi1);
            fprintf(fptr2,"%d%d%d",point1/100,(point1/10)%10,point1%10);
            fprintf(fptr2,"\n%s",hi2);
            fprintf(fptr2,"%d%d%d",point2/100,(point2/10)%10,point2%10);
            fclose(fptr2);
            }
        }
    }
    if (gameMode==2)
    {
        Search_in_File2("UnsavedTimekeeper.txt",hi3,0,0);
        int r=findresultt;
        if(r==0)
        {
            printf("You don't have any unfinished games. starting new game...\n\n%s is black.\n\n",hi1);
            for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        a[i][j]=0;
                    }
                    
                }
            a[3][3]=-1;
            a[4][4]=-1;
            a[3][4]=1;
            a[4][3]=1;
            playTimeKeeper(a,1,0,0,0,0);
            if (emergencyExit==1)
            {
                //printf("1111111");
                FILE *fptr;

               
                fptr = fopen("UnsavedTimekeeper.txt", "a");
                fprintf(fptr,"\n%s\n",hi3);
                if (turncopy==1)
                {
                     fprintf(fptr,"1");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"2");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"1");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"2");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"%d%d%d",timePassed1/100,(timePassed1/10)%10,timePassed1%10);
                fprintf(fptr,"%d%d%d",timePassed2/100,(timePassed2/10)%10,timePassed2%10);
                fprintf(fptr,"%d",requestSave1);
                fprintf(fptr,"%d",requestSave2);
                fprintf(fptr,"\n%s%s\n",hi2,hi1);
                if (turncopy==1)
                {
                     fprintf(fptr,"2");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"1");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"2");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"1");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fprintf(fptr,"%d%d%d",timePassed2/100,(timePassed2/10)%10,timePassed2%10);
                fprintf(fptr,"%d%d%d",timePassed1/100,(timePassed1/10)%10,timePassed1%10);
                fprintf(fptr,"%d",requestSave2);
                fprintf(fptr,"%d",requestSave1);
                fclose(fptr);
            }
            else{
            printf("\nPoint %s on this game:%d\nPoint %s on this game:%d\n",hi1,point1,hi2,point2);
            FILE *fptr2;
            fptr2 = fopen("TableOfPoints.txt", "a");
            fprintf(fptr2,"\n%s",hi1);
            fprintf(fptr2,"%d%d%d",point1/100,(point1/10)%10,point1%10);
            fprintf(fptr2,"\n%s",hi2);
            fprintf(fptr2,"%d%d%d",point2/100,(point2/10)%10,point2%10);
            fclose(fptr2);
            }
        }
        else{
            printf("You have %d unfinished games. which one do you want to play?(enter 0 for new game):",r);
            int y;
            scanf("%d",&y);
            if (y!=0)
            {
            
            
            //printf("%s",hi3);
            Search_in_File2("UnsavedTimekeeper.txt",hi3,1,y);
            //printf("%s",savedData);
            makeTheChanges2(savedData2,a);
            turn=turncopy;

            //printf("%d %d",point1,point2);
            //prTable(a,turn);
            
            }
            else{
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        a[i][j]=0;
                    }
                    
                }
                a[3][3]=-1;
                a[4][4]=-1;
                a[3][4]=1;
                a[4][3]=1;
                turn=1;
            }
            printf("\n%s is black.\n",hi1);
            playTimeKeeper(a,turn,timePassed1,timePassed2,requestSave1,requestSave2);
            if (emergencyExit==1)
            {
                FILE *fptr;

               
                fptr = fopen("UnsavedTimekeeper.txt", "a");
                fprintf(fptr,"\n%s\n",hi3);
                if (turncopy==1)
                {
                     fprintf(fptr,"1");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"2");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"1");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"2");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"%d%d%d",timePassed1/100,(timePassed1/10)%10,timePassed1%10);
                fprintf(fptr,"%d%d%d",timePassed2/100,(timePassed2/10)%10,timePassed2%10);
                fprintf(fptr,"%d",requestSave1);
                fprintf(fptr,"%d",requestSave2);
                fprintf(fptr,"\n%s%s\n",hi2,hi1);
                if (turncopy==1)
                {
                     fprintf(fptr,"2");
                }
                if (turncopy==-1)
                {
                     fprintf(fptr,"1");
                }
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        switch (a[i][j])
                        {
                        case 1:
                            fprintf(fptr,"2");
                            break;
                        case 2:
                            fprintf(fptr,"3");
                            break;
                        case -1:
                            fprintf(fptr,"1");
                            break;
                        case 0:
                            fprintf(fptr,"0");
                            break;
                        default:
                            break;
                        }
                    }
                    
                }
                fprintf(fptr,"%d%d%d",point2/100,(point2/10)%10,point2%10);
                fprintf(fptr,"%d%d%d",point1/100,(point1/10)%10,point1%10);
                fprintf(fptr,"%d%d%d",timePassed2/100,(timePassed2/10)%10,timePassed2%10);
                fprintf(fptr,"%d%d%d",timePassed1/100,(timePassed1/10)%10,timePassed1%10);
                fprintf(fptr,"%d",requestSave2);
                fprintf(fptr,"%d",requestSave1);
                fclose(fptr);
            }
            else{
            printf("\nPoint %s on this game:%d\nPoint %s on this game:%d\n",hi1,point1,hi2,point2);
            FILE *fptr2;
            fptr2 = fopen("TableOfPoints.txt", "a");
            fprintf(fptr2,"\n%s",hi1);
            fprintf(fptr2,"%d%d%d",point1/100,(point1/10)%10,point1%10);
            fprintf(fptr2,"\n%s",hi2);
            fprintf(fptr2,"%d%d%d",point2/100,(point2/10)%10,point2%10);
            fclose(fptr2);
            }
        }
    }
    

    if (emergencyExit==0)
    {
        printf("Game finished\nPress 1 to start a game and 0 to exit:");
    }
    else
    {
        printf("Game saved\nPress 1 to start a game and 0 to exit:");
    }
    
    scanf("%d",&exitGame);
    point1=0;
    point2=0;
    findresultt=0;
    emergencyExit=0;
    requestSave1=0;
    requestSave2=0;
    timePassed1=0;
    timePassed2=0;
    turn=1;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            a[i][j]=0;
        }
        
    }
    
    }
    //showing table
    Point_Search("TableOfPoints.txt");
	for (int i = 0; i < f1; i++)
	{
		int qq=0;
		//printf("%s ",pointRow[i].Name);
		while (pointRow[i].Name[qq]!='0'&&pointRow[i].Name[qq]!='1'&&pointRow[i].Name[qq]!='2'&&pointRow[i].Name[qq]!='3'&&pointRow[i].Name[qq]!='4'&&pointRow[i].Name[qq]!='5'&&pointRow[i].Name[qq]!='6'&&pointRow[i].Name[qq]!='7'&&pointRow[i].Name[qq]!='8'&&pointRow[i].Name[qq]!='9')
		{
			qq++;
		}
		for (int j = 0; j < qq; j++)
		{
			pointRow2[i].Name[j]=pointRow[i].Name[j];
		}
		int op=0;
		while (pointRow[i].Name[qq]!='\0')
		{
			pointRow[i].pointEach[op]=pointRow[i].Name[qq];
			op++;
			qq++;
		}
		
		//printf("%s ",pointRow[i].pointEach);
		qq=0;
		op=0;
	}
	strToInt();
	// for (int i = 0; i < f1; i++)
	// {
	// 	printf("%s %d\n",pointRow2[i].Name,pointRow2[i].pointOfEach);
	// }
	for (int i = 0; i < f1-1; i++)
	{
		for (int j = i+1; j < f1; j++)
		{
			if ((strcmp(pointRow2[i].Name,pointRow2[j].Name))==0&&strcmp(pointRow2[i].Name,"dontcount")!=0)
			{
				pointRow2[i].pointOfEach+=pointRow2[j].pointOfEach;
				strcpy(pointRow2[j].Name,"dontcount");
			}
			
		}
		
	}
	//sortPoints();
	// for (int i = 0; i < f1; i++)
	// {
	// 	if ((strcmp(pointRow2[i].Name,"dontcount"))!=0)
	// 	{
	// 	printf("%s %d\n",pointRow2[i].Name,pointRow2[i].pointOfEach);

	// 	}
	// }
    int saveNum=0;
    int max=0;
    int e33=1;
    for (int i = 0; i < f1; i++)
    {
       for (int j = 0; j < f1; j++)
       {
        if (pointRow2[j].pointOfEach>max)
        {
            max=pointRow2[j].pointOfEach;
            saveNum=j;
        }
       }
       //printf("%d ",saveNum);
         max=0;
        if ((strcmp(pointRow2[saveNum].Name,"dontcount")!=0))
        {
            printf("\n%d-%s Points: %d",e33,pointRow2[saveNum].Name,pointRow2[saveNum].pointOfEach);
            e33++;
        }
        
         pointRow2[saveNum].pointOfEach=0;
         saveNum=0;
       
       
    }
    return 0;
}
