/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMListLevelTextMapper : NSObject {
    NSMutableArray * _tokens;
}

- (void).cxx_destruct;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 levelDescriptions:(id)arg2 language:(int)arg3;
- (id)listLevelTextForOutline:(id)arg1;
- (id)token:(unsigned int)arg1;
- (unsigned long long)tokenCount;

@end