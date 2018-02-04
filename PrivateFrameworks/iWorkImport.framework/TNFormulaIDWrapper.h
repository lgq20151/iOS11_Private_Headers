/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormulaIDWrapper : NSObject <NSCopying> {
    struct { 
        unsigned int formulaID : 24; 
    }  mID;
}

@property (readonly) struct { unsigned int x1 : 24; } formulaID;

- (struct { unsigned int x1 : 24; })chartFormulaID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { unsigned int x1 : 24; })formulaID;
- (unsigned long long)hash;
- (id)initWithTNChartFormulaID:(struct { unsigned int x1 : 24; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTNFormulaIDWrapper:(id)arg1;

@end