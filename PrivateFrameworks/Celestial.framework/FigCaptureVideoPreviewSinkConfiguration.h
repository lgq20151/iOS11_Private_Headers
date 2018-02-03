/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _depthDataDeliveryEnabled;
    bool  _filterRenderingEnabled;
    NSArray * _filters;
}

@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool filterRenderingEnabled;
@property (nonatomic, copy) NSArray *filters;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (bool)filterRenderingEnabled;
- (id)filters;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setFilters:(id)arg1;
- (int)sinkType;

@end
