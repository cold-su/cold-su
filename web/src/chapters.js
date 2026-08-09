import ch0 from "@book/从这里开始.md?raw";

export const chapters = [
  {
    id: "0",
    num: 0,
    kicker: "写在前面",
    title: "从这里开始",
    subtitle: "给新来的你：一张小地图",
    md: ch0,
    // pin: "src/xxx.xx:123",
  },
];

export function getChapter(id) {
  return chapters.find((c) => c.id === id);
}
