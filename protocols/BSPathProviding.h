/* made by EzioChiu.
 */

@protocol BSPathProviding <NSObject>

@required

- (NSURL *)cachesPath;
- (NSURL *)defaultPath;
- (NSURL *)libraryPath;

@end
