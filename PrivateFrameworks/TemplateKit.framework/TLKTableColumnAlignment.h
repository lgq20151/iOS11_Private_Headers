/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTableColumnAlignment : TLKObject {
    unsigned long long  _columnAlignment;
    long long  _dataAlignment;
    bool  _isEqualWidth;
}

@property unsigned long long columnAlignment;
@property long long dataAlignment;
@property bool isEqualWidth;

- (unsigned long long)columnAlignment;
- (long long)dataAlignment;
- (id)description;
- (bool)isEqualWidth;
- (id)observableProperties;
- (void)setColumnAlignment:(unsigned long long)arg1;
- (void)setDataAlignment:(long long)arg1;
- (void)setIsEqualWidth:(bool)arg1;
- (long long)textAlignment;

@end
