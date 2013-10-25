//
//  UIApplication+NWActivityIndicator.h
//
//  Created by Hituzi Ando on 13/01/07.
//
//
// UIApplication *app
// app.networkActivityIndicatorVisible = YES;
// 〜何か処理〜
// app.networkActivityIndicatorVisible = NO;
//
// 上記のコードでは複数箇所でインジケータを回した場合,
// 一カ所の処理が完了しNOを代入した時点で他の箇所までキャンセルされてしまう.
// このカテゴリではインジケータ呼び出し回数を記録し,すべての呼び出し個所での処理が完了した時点でインジケータの回転を止める.
// 使い方は
//
// [app indicator:YES];
// 〜何か処理〜
// [app indicator:NO];
//
// もしくは
//
// NSThread *thread = [[NSThread alloc] initWithTarget:self selector:@selector(何か処理) object:nil];
// [app indicator:YES withThread:thread];
// 止めるときは[app indicator:NO];
//
// でOK.Threadを使うのはインジケータが回転する前に何か処理が実行されてしまうことがあるため.
// 

#import <Foundation/Foundation.h>

@interface UIApplication (NWActivityIndicator)
- (NSInteger)networkActivityIndicator:(BOOL)visible;
- (NSInteger)networkActivityIndicator:(BOOL)visible withThread:(NSThread *)thread;
@end
