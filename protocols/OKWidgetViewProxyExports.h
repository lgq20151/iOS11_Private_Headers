/* made by EzioChiu.
 */

@protocol OKWidgetViewProxyExports <JSExport>

@required

- (OKWidgetView *)addSubWidgetViewWithTemplateName:(NSString *)arg1 name:(NSString *)arg2 andSettings:(NSDictionary *)arg3;
- (struct CGPoint { double x1; double x2; })convertPointWithParallax:(struct CGPoint { double x1; double x2; })arg1;
- (void)dynamicsRemoveSnapping;
- (void)dynamicsSnapToPoint:(struct CGPoint { double x1; double x2; })arg1 withDamping:(double)arg2;
- (NSArray *)subWidgetViewsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@optional

- (OKWidgetView *)addSubWidgetViewWithTemplateName:(NSString *)arg1 name:(NSString *)arg2 andSettings:(NSDictionary *)arg3 __JS_EXPORT_AS__addSubWidgetViewWithTemplateName:(id)arg4;
- (struct CGPoint { double x1; double x2; })convertPointWithParallax:(struct CGPoint { double x1; double x2; })arg1 __JS_EXPORT_AS__convertPointWithParallax:(id)arg2;
- (void)dynamicsSnapToPoint:(struct CGPoint { double x1; double x2; })arg1 withDamping:(double)arg2 __JS_EXPORT_AS__dynamicsSnapToPoint:(id)arg3;
- (NSArray *)subWidgetViewsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 __JS_EXPORT_AS__subWidgetViewsInRect:(id)arg2;

@end