/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKGLContext : NSObject {
    PKGLContext * _sharedContext;
}

@property (nonatomic, readonly) PKGLContext *sharedContext;

+ (id)defaultShareContext;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSharedContext:(id)arg1;
- (id)sharedContext;

@end
