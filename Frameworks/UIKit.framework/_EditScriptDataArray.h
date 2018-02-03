/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _EditScriptDataArray : NSObject <_EditScriptData> {
    NSString * _cachedStringValue;
    NSArray * _data;
}

@property (nonatomic, retain) NSString *cachedStringValue;
@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;

- (id)cachedStringValue;
- (long long)characterIndexForItem:(long long)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(bool)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;
- (long long)length;
- (long long)lengthOfItem:(long long)arg1;
- (void)setCachedStringValue:(id)arg1;
- (void)setData:(id)arg1;
- (id)stringAtIndex:(long long)arg1;
- (id)stringValue;

@end
