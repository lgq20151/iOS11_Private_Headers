/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVKeyValueChange : NSObject {
    NSDictionary * _changes;
    NSString * _keyPath;
    id  _observationToken;
}

@property (getter=isInitialValue, nonatomic, readonly) bool initialValue;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id observationToken;
@property (nonatomic, readonly) id oldValue;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)initWithChanges:(id)arg1 keyPath:(id)arg2 observationToken:(id)arg3;
- (bool)isInitialValue;
- (id)keyPath;
- (id)object:(id)arg1 as:(Class)arg2;
- (id)objectOrNilFor:(id)arg1;
- (id)observationToken;
- (id)oldValue;
- (id)value;

@end
