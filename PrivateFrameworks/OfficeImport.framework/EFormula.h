/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EFormula : NSObject {
    NSString * mErrMsg;
    EDFormula * mFormula;
    Class  mFormulaClass;
    <EFHelper> * mHelper;
    EFTableData * mTableData;
    struct EFLexer { int (**x1)(); char *x2; unsigned long long x3; int x4; int x5; int x6; int x7; int *x8; struct basic_istream<char, std::__1::char_traits<char> > {} *x9; struct basic_ostream<char, std::__1::char_traits<char> > {} *x10; BOOL x11; unsigned long long x12; char *x13; int x14; int x15; int x16; unsigned long long x17; unsigned long long x18; struct yy_buffer_state {} **x19; int x20; char *x21; int *x22; int *x23; char *x24; int *x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; union YYSTYPE { struct EFRefTok { int x_1_2_1; unsigned int x_1_2_2; unsigned char x_1_2_3[12]; } x_33_1_1; id x_33_1_2; int x_33_1_3; double x_33_1_4; id x_33_1_5; /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*x_33_1_6; void*x_33_1_7; unsigned short x_33_1_8; void*x_33_1_9; const void*x_33_1_10; out void*x_33_1_11; void*x_33_1_12; id x_33_1_13; union EFData { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; bool x_1_3_3; } x_14_2_1; struct { unsigned long long x_2_3_1; void *x_2_3_2; } x_14_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; bool x_3_3_3; bool x_3_3_4; } x_14_2_3; } x_33_1_14; void*x_33_1_15; } x33; } * mYylex;
}

+ (id)singletonEFormula;
+ (id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3;

- (void)dealloc;
- (Class)formulaClass;
- (id)formulaHelper;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned long long)resolveName:(const char *)arg1;
- (unsigned long long)resolveSheet:(const char *)arg1 isCurrentSheet:(bool*)arg2;
- (id)resolveTable:(const char *)arg1 sheetIndex:(unsigned long long*)arg2;
- (void)setFormula:(id)arg1;
- (void)setFormulaClass:(Class)arg1;
- (void)setFormulaHelper:(id)arg1;
- (void)setTableData:(id)arg1;
- (id)stringToTokens:(id)arg1;
- (id)tableData;

@end
