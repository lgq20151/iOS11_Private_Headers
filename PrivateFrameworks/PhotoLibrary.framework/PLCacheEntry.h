/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCacheEntry : NSObject {
    struct lruEntry { id x1; struct { struct lruEntry {} *x_2_1_1; struct lruEntry {} **x_2_1_2; } x2; } * _entry;
    id  _object;
}

- (void)dealloc;
- (struct lruEntry { id x1; struct { struct lruEntry {} *x_2_1_1; struct lruEntry {} **x_2_1_2; } x2; }*)lruListEntry;
- (id)object;
- (void)setObject:(id)arg1;

@end
