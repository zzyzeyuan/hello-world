class Table {//Table类
public:
  void show(){
    cout<< ;
  }
  int addRow();//增加行
  void delRow(int n);//删除行
  int addColumn();//增加列
  void delColumn(int n);//删除列
private:
  Cell cells;
};
class Cell {//Cell类
public:
  Cell(char con[]);
  ~Cell();

  void show();
private:
  string content;
}
int main() {
  Table tb;//Table一个变量tb
  //进行以下操作
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1(5,5);
  tb1.show();
  tb1.set(1,1,30);
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}
