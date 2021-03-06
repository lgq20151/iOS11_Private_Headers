/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCachePair : NSObject {
    id  _key;
    id  _value;
}

@property (nonatomic, retain) id key;
@property (nonatomic, retain) id value;

- (void)dealloc;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
