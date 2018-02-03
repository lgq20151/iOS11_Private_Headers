/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKSandboxExtension : NSObject {
    long long  _handle;
    NSString * _token;
}

@property long long handle;
@property (retain) NSString *token;

- (void).cxx_destruct;
- (void)consume;
- (void)dealloc;
- (void)expel;
- (long long)handle;
- (id)initWithExtension:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHandle:(long long)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
