/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKGLESContext : PKGLContext {
    EAGLContext * _eaglContext;
    EAGLContext * _previousContext;
}

@property (nonatomic, readonly) EAGLContext *eaglContext;

+ (id)defaultShareContext;

- (void).cxx_destruct;
- (id)eaglContext;
- (id)initWithSharedContext:(id)arg1;
- (void)makeCurrent;
- (void)makeCurrentAndStorePreviousContext;
- (void)restorePreviousContext;

@end
