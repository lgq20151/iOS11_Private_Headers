/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGModelFeatures : NSObject {
    SGTransformerInstance * _source;
    PMLSparseVector * _vector;
}

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 vector:(id)arg2;
- (id)sessionDescriptor;
- (id)source;
- (id)vector;

@end