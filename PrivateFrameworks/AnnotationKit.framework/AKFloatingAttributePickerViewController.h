/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFloatingAttributePickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {
    UIColor * _color;
    long long  _colorAttributeTag;
    AKColorPaletteView * _colorPalette;
    UIBarButtonItem * _colorPaletteButtonItem;
    AKController * _controller;
    NSArray * _rightButtonItems;
    UIView * _separatorView;
    NSArray * _staticItems;
    long long  _tag;
    UIToolbar * _toolbar;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long colorAttributeTag;
@property (nonatomic, retain) AKColorPaletteView *colorPalette;
@property (nonatomic, retain) UIBarButtonItem *colorPaletteButtonItem;
@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *rightButtonItems;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) NSArray *staticItems;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;
@property (nonatomic, retain) UIToolbar *toolbar;

- (void).cxx_destruct;
- (id)color;
- (long long)colorAttributeTag;
- (id)colorPalette;
- (id)colorPaletteButtonItem;
- (id)controller;
- (id)convertTextAttributes:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)rightButtonItems;
- (id)separatorView;
- (void)setColor:(id)arg1;
- (void)setColorAttributeTag:(long long)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setColorPaletteButtonItem:(id)arg1;
- (void)setController:(id)arg1;
- (void)setRightButtonItems:(id)arg1;
- (void)setRightButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setSeparatorView:(id)arg1;
- (void)setStaticItems:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setToolbar:(id)arg1;
- (id)staticItems;
- (void)syncTextAttributesToUI:(id)arg1;
- (long long)tag;
- (id)toolbar;
- (void)valueChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end