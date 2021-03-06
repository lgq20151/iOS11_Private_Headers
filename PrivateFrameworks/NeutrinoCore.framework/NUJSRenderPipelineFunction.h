/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary * _params;
    NSString * _source;
}

- (void).cxx_destruct;
- (id)description;
- (id)evaluate:(id)arg1 error:(out id*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithParameters:(id)arg1 source:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFunction:(id)arg1;

@end
