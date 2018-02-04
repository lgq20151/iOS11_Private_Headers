/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLEditSource : NSObject {
    long long  _mediaType;
    NUResolvedSource * _resolvedSource;
}

@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NUResolvedSource *resolvedSource;
@property (nonatomic, readonly, retain) NUSource *source;

- (void).cxx_destruct;
- (id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2;
- (long long)mediaType;
- (id)resolvedSource;
- (void)setIdentifier:(id)arg1;
- (id)source;

@end