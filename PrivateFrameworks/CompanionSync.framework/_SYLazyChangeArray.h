/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYLazyChangeArray : NSArray {
    long long  _compatibilityVersion;
    <SYChangeSerializer> * _decoder;
    bool  _isSYObjectDataArray;
    NSArray * _source;
    NSArray * _types;
}

@property (nonatomic) long long compatibilityVersion;

- (void).cxx_destruct;
- (long long)compatibilityVersion;
- (unsigned long long)count;
- (id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3;
- (id)initWithSourceArray:(id)arg1 decoder:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)setCompatibilityVersion:(long long)arg1;

@end