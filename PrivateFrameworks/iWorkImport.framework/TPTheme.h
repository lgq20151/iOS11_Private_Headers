/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTheme : TSATheme

+ (void)initialize;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3;

- (id)_paragraphStylePresetWithName:(id)arg1 orContentTag:(id)arg2;
- (id)bodyStyle;
- (id)footnoteStyle;
- (id)headerAndFooterStyle;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_saveToArchive:(struct ThemeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ThemeArchive {} *x5; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
