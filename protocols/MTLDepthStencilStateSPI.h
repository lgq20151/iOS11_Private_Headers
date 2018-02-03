/* made by EzioChiu.
 */

@protocol MTLDepthStencilStateSPI <MTLDepthStencilState>

@required

- (bool)readsDepth;
- (bool)readsStencil;
- (bool)writesDepth;
- (bool)writesStencil;

@end
