/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPResponse : NSObject <NSCopying> {
    id  _builder;
    NSArray * _middleware;
    id  _request;
    bool  _valid;
}

@property (nonatomic, readonly) id builder;
@property (nonatomic, copy) NSArray *middleware;
@property (nonatomic, readonly, copy) id request;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)builder;
- (id)chain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (id)middleware;
- (id)request;
- (void)setMiddleware:(id)arg1;

@end
