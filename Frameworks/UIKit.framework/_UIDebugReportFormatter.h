/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDebugReportFormatter : NSObject {
    unsigned long long  _extraBodyIndentLevel;
    unsigned long long  _indentLevel;
    NSString * _indentString;
}

@property (nonatomic) unsigned long long extraBodyIndentLevel;
@property (nonatomic) unsigned long long indentLevel;
@property (nonatomic, copy) NSString *indentString;

+ (id)defaultFormatter;

- (void).cxx_destruct;
- (unsigned long long)extraBodyIndentLevel;
- (unsigned long long)indentLevel;
- (id)indentString;
- (id)init;
- (void)setExtraBodyIndentLevel:(unsigned long long)arg1;
- (void)setIndentLevel:(unsigned long long)arg1;
- (void)setIndentString:(id)arg1;
- (id)stringFromReportComponents:(id)arg1;

@end