/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLOffsetIntermediate : NSSQLIntermediate {
    unsigned long long  _offset;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithOffset:(unsigned long long)arg1 inScope:(id)arg2;

@end
