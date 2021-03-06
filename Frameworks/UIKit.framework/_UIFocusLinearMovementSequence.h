/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusLinearMovementSequence : NSObject {
    NSArray * _items;
    bool  _looping;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (getter=isLooping, nonatomic, readonly) bool looping;

+ (id)sequenceWithItems:(id)arg1 loops:(bool)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItems:(id)arg1 loops:(bool)arg2;
- (bool)isLooping;
- (id)items;

@end
