// 包含操作符，操作数类型定义

enum OpCode
{

};

enum OpType
{
	Int_Literal = 0x00,
	Float_Literal,
	String_Literal,
	Variable,
	Literal_Index_Array,
	Variable_Index_Array,
	LineLabel,
	Function,
	HostAPIFunction,
};
