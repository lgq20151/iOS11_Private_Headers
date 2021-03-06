/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorPosterController : NSObject {
    MiroMemory * _memory;
    MiroMovieDisplayContainerViewController * _movieDisplayController;
    UIImageView * _playerPoster;
    NSArray * _titleStyles;
}

@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) MiroMovieDisplayContainerViewController *movieDisplayController;
@property (nonatomic, readonly) UIImageView *playerPoster;
@property (nonatomic, readonly) NSArray *titleStyles;

- (void).cxx_destruct;
- (id)initWithMemory:(id)arg1;
- (id)memory;
- (id)movieDisplayController;
- (id)playerPoster;
- (void)regenerateAllPosters;
- (void)regeneratePlayerPoster;
- (void)setMemory:(id)arg1;
- (void)setMovieDisplayController:(id)arg1;
- (id)titleStyles;

@end
