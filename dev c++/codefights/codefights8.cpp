int matrixElementsSum(std::vector<std::vector<int>> matrix) {
int price;
for (int i=0; i<matrix.size(); i++)
for (int j=0; j<matrix[0].size(); j++){
if (matrix[i][j]==0){
for (int k=i;k<matrix.size();k++)
matrix[k][j]=0;
}
price+= matrix[i][j];
}
return price;
}
