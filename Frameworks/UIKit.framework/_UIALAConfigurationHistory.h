/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource> {
    unsigned long long  _alignment;
    bool  _hasEstablishedAlignmentValues;
    bool  _inAlignmentLayoutUpdateSection;
}

@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasEstablishedAlignmentValues;
@property (readonly) unsigned long long hash;
@property (getter=isInAlignmentLayoutUpdateSection, nonatomic) bool inAlignmentLayoutUpdateSection;
@property (nonatomic) bool layoutFillsCanvas;
@property (nonatomic) bool layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

- (unsigned long long)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasEstablishedAlignmentValues;
- (bool)isInAlignmentLayoutUpdateSection;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setHasEstablishedAlignmentValues:(bool)arg1;
- (void)setInAlignmentLayoutUpdateSection:(bool)arg1;

@end
