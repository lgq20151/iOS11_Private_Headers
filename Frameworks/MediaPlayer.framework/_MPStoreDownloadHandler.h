/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPStoreDownloadHandler : SSDownloadHandler {
    NSString * _downloadFilePath;
    bool  _skipInstall;
}

@property (nonatomic, copy) NSString *downloadFilePath;
@property (nonatomic) bool skipInstall;

- (void).cxx_destruct;
- (id)downloadFilePath;
- (void)setDownloadFilePath:(id)arg1;
- (void)setSkipInstall:(bool)arg1;
- (bool)skipInstall;

@end
